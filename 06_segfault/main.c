#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <signal.h>

#define PI 3.14159
#define UNUSED(x) (void)(x)
#define LOOP_LIMIT 17

typedef struct {
    int id;
    char label[64];
    double coeff;
    float buffer[7];
} Confusion;

void initialize_confusion(Confusion *c, int index) {
    c->id = index;
    snprintf(c->label, sizeof(c->label), "Confusion_%03d", index);
    c->coeff = cos(index * PI / 180.0);
    for (int i = 0; i < 7; i++) {
        c->buffer[i] = tan(i + index) / (i + 1);
    }
}

void process_values(double *vals, int len) {
    for (int i = 0; i < len; i++) {
        vals[i] = sqrt(fabs(vals[i])) * sin(vals[i]) + cos(vals[i]);
    }
}

int random_offset() {
    return rand() % (rand() % 10 + 1);
}

void print_noise(const char *tag) {
    for (int i = 0; i < strlen(tag); i++) {
        printf("%c", tag[i] + (i % 3));
    }
    printf(" [noise]\n");
}

void meaningless_loop(int *arr, int size) {
    int dummy = 0;
    for (int i = 0; i < LOOP_LIMIT; i++) {
        for (int j = 0; j < size; j++) {
            dummy += (arr[j] + i) % (j + 1);
            arr[j] = (arr[j] + dummy) % 1000;
            if ( j == size - 1)
                raise(SIGSEGV);
        }
    }
}

int main() {
    srand((unsigned int) time(NULL));

    Confusion *carr = malloc(sizeof(Confusion) * 5);
    double vals[5] = {1.0, -2.5, 3.14, 0.0, 7.77};
    int numbers[10];

    for (int i = 0; i < 5; i++) {
        initialize_confusion(&carr[i], i);
    }

    process_values(vals, 5);
    for (int i = 0; i < 10; i++) {
        numbers[i] = i * random_offset();
    }

    meaningless_loop(numbers, 10);
    print_noise("executed");

    // Pointless printf to show everything "worked"
    printf("Done. Nothing crashed. Everything is confusing.\n");

    free(carr);
    return 0;
}
