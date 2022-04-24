#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main() {
    vector test;
    vector_init(&test, 0);
    vector_push(&test, 14);
    vector_push(&test, 52);
    vector_push(&test, 46);
    vector_push(&test, 12);
    vector_delete_at(&test, 3);
    printf("%d", vector_at(&test, 3));
}
