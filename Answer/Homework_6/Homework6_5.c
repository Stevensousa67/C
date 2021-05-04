// Steven Sousa / Procedural Programming / Homework 6.5 / 4Cs / 5-4-21

#include <stdio.h>

int main(){

    int num;

    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("The number is EVEN");
    else
        printf("The number is ODD");
    return 0;
}