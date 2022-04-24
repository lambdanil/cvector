#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main() {
    printf("Enter some numbers:\n");
    vector numbers;
    vector_init(&numbers, 0);
    int current;
    int added;
    float average;
    char c;
    while (1) {
        if (scanf("%d",&current) == 1) {
            vector_push(&numbers, current);
            added = 0;
            for (int i = 0; i < (int)numbers.size; i++) added+=(vector.at[i]);
            average = (float) added / (int)numbers.size;
            printf("Average of entered numbers is %0.3f\n",average);
        }
        else {
            printf("Average of numbers:");
            for (int i = 0; i < (int)numbers.size-1; i++) printf(" %d,", vector.at[i]);
            printf(" %d", numbers.at[(int)numbers.size-1]);
            average = (float) added / (int)numbers.size;
            printf(" is %0.3f \n",average);
            break;
        }
    }
    vector_free(&numbers);

}
