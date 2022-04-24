#include <stdlib.h>

typedef struct Vector {
    size_t size; // number of elements in vector
    int* arr; // dynamic array
} vector;

void vector_init(vector *cvector, size_t n) {
    cvector->arr = (int*)malloc(n * sizeof(int)); // allocate memory
    cvector->size = n;
}

void vector_resize(vector *cvector, size_t n) {
    cvector->arr = (int*)realloc(cvector->arr, n * sizeof(int)); // reallocate memory
    cvector->size = n; 
}

void vector_push(vector *cvector, int toPush) {
    size_t nsize = (cvector->size+1) ; // increase number of elements by one
    vector_resize(cvector, nsize);
    cvector->arr[(cvector->size)-1] = toPush; // insert the value
}

void vector_free(vector *cvector) {
    free(cvector->arr);
}

void vector_delete_last(vector *cvector) {
    vector_resize(cvector, cvector->size - 1); // deallocate last cell
}

void vector_delete_at(vector *cvector, int n) { // delete specific value
    for (int i = n; n < (int)cvector->size - 2; n++) {
        cvector->arr[n] = cvector->arr[n+1]; // move array values
    }
    vector_resize(cvector, cvector->size - 1); // resize array
}

int vector_at(vector *cvector, int n) {
    return cvector->arr[n]; // return position
}
