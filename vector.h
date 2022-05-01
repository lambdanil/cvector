#include <stdlib.h>

typedef struct Vector {
    size_t size; // number of elements in vector
    int* at; // dynamic array
} vector;

void vector_init(vector *cvector, size_t n) {
    cvector->at = (int*)malloc(n * sizeof(int)); // allocate memory
    cvector->size = n;
}

void vector_resize(vector *cvector, size_t n) {
    cvector->at = (int*)realloc(cvector->at, n * sizeof(int)); // reallocate memory
    cvector->size = n; 
}

void vector_push(vector *cvector, int toPush) {
    size_t nsize = (cvector->size+1) ; // increase number of elements by one
    vector_resize(cvector, nsize);
    cvector->at[(cvector->size)-1] = toPush; // insert the value
}

void vector_insert(vector *cvector, int toPush, int n) {
    size_t nsize = (cvector->size+1) ; // increase number of elements by one
    vector_resize(cvector, nsize);
    for (int i = (int)cvector->size - 1; i > n; i--) {
        cvector->at[i] = cvector->at[i-1]; // move array values
    } 
    cvector->at[n] = toPush; // insert the value
}

void vector_free(vector *cvector) {
    free(cvector->at);
}

void vector_delete_last(vector *cvector) {
    vector_resize(cvector, cvector->size - 1); // deallocate last cell
}

void vector_delete_at(vector *cvector, int n) { // delete specific value
    for (int i = n; i < (int)cvector->size - 1; i++) {
        cvector->at[i] = cvector->at[i+1]; // move array values
    }
    vector_resize(cvector, cvector->size - 1); // resize array
}
