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
    vector_insert(&test, 15, 0); // Insert value 15 before cell 0
    vector_delete_at(&test, 1); // Delete value at cell 1 (in this case deletes 14)
    vector_set(&test, 23, 1); // Set cell 1 to 23
    printf("%d", vector_at(&test, 1)); // Print value at position 2
    printf("%d", (int)test.size); // Print number of cells
    vector_free(&test); // Deallocate array memory
}
