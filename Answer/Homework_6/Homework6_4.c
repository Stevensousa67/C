// Steven Sousa / Procedural Programming / Homework 6.4 / 4Cs / 5-4-21

#include <stdio.h>
#define MAX_SIZE 100

int main(){

    int arr[MAX_SIZE];
    int N, i;
    int *ptr = arr;

    printf("Enter size of array: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++){

        printf("Enter element number %d:\n", i+1);
        scanf("%d", &arr[i]);
    }
    ptr = arr;

    printf("Array elements: ");

    for (i = 0; i < N; i++){

        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}
