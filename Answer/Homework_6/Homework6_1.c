// Steven Sousa / Procedural Programming / Homework 6.1 / 4Cs / 5-4-21

#include <stdio.h>

int main(){

    int year;

    printf("Enter any year: ");
    scanf("%d", &year);

    printf("%s", ((year%4==0 && year%100!=0) ?
                  "LEAP YEAR" : (year%400 ==0 ) ?
                                "LEAP YEAR" : "COMMON YEAR"));
    return 0;
}


