#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vector.h"

int main() {
    vector test;
    vector_init(&test, 0);
    float my_float = 5.5;
    int my_int;
    memcpy(&my_int, &my_float, sizeof(int));
    vector_push(&test, my_int);
    float new_float;
    memcpy(&new_float, &test.at[0], sizeof(int));
    printf("%f", new_float);
}