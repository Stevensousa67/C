// Steven Sousa / Procedural Programming / Homework 6.3 / 4Cs / 5-4-21

#include <stdio.h>
#define MAX_SIZE 100

int main(){

    int arr[MAX_SIZE];
    int size, i;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    for(i=0; i<size; i++){

        printf("Enter element number %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray in reverse order: ");

    for(i = size-1; i>=0; i--)
        printf("%d\t", arr[i]);

    return 0;
}
