#include <stdio.h>

int main() {
    
    int size = 5; 

    
    int A[] = {7, 4, 9, 5, 2};
    int B[] = {1, 3, 1, 7, 3};

    
    int result[size];

    
    for (int i = 0; i < size; ++i) {
        result[i] = A[i] + B[i];
    }

    
    printf("C array after addition:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n");

    
}
