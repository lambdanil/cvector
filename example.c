#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main() {
    vector test; // Create new vector
    vector_init(&test, 0); // Initialize vector with 0 cells
    vector_push(&test, 14); // Push some values
    vector_push(&test, 52);
    vector_push(&test, 46);
    vector_push(&test, 12);
    vector_delete_at(&test, 3); // Delete value at 3rd position (in this case deletes 46)
    printf("%d", vector_at(&test, 3)); // Print value at 3rd position
    printf("%d", (int)test.size); // Print number of cells
    vector_free(&test); // Deallocate array memory
}
