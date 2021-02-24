#include <stdio.h>
#include "Homework2_MyMath.h"

int main() {

    char CaseChoice;

    printf("This Homework has Questions 1-4 from Homework02. Select which question to play with. ");
    scanf("%c", &CaseChoice);

    switch(CaseChoice)
    {

        case '1':{

            printf("You are about to run the user input version of the Exercise 1.\n");

            int side1, side2, side3;

            printf("Enter a value for side 1, side 2, and side 3 respectively: ");
            scanf("%d%d%d", &side1, &side2, &side3);

            isTriangle(side1, side2, side3);

            printf("\nThe Unit Test is about to execute. See source code for more information.");



        }

        case '2':{

            printf("You are about to run the user input version of the Exercise 2.\n");

            int number;

            printf("Choose a number to do a triangle number: ");
            scanf("%d", &number);

            triangleNumber(number);

            printf("\nThe Unit Test is about to execute. See source code for more information.");
        }

        case '3':{

            printf("You are about to run the user input version of the Exercise 3.\n");

            int toSquare;

            printf("Select a number to square it: ");
            scanf("%d", &toSquare);

            squareNumber(toSquare);

            printf("\nThe Unit Test is about to execute. See source code for more information.");
        }

        case '4':{
            /* Question 4
             *
             */

            //printf("You are about to run the user input version of the Exercise 4.\n");

            int possibleSquare;

            printf("Select a number to check if it is a perfect square: ");
            scanf("%d", &possibleSquare);

            printf(isSquareNumber(possibleSquare));

            printf("\nThe Unit Test is about to execute. See source code for more information.");

        }
    }// end switch

    return 0;
}