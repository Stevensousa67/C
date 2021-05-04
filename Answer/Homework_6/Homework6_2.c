// Steven Sousa / Procedural Programming / Homework 6.2 / 4Cs / 5-4-21

#include <stdio.h>
#include <math.h>

int main(){

    int i, j, num, isPrime;

    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);

    printf("All Prime Factors of %d are: \n", num);

    for(i = 2; i <= num; i++){
        if(num % i == 0){
            isPrime = 1;
            for(j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime == 1)
                printf("%d, ", i);
        }
    }
    return 0;
}