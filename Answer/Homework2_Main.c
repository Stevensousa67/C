#include <stdio.h>
#include "Homework2_MyMath.h"

int main() {

    char CaseChoice;

    printf("This Homework has Questions 1-4 from Homework02. Select which question to play with.");
    scanf("%c", &CaseChoice);

    switch(CaseChoice)
    {

        case '1':{

            int side1, side2, side3;

            printf("Enter a value for side 1, side 2, and side 3 respectively: ");
            scanf("%d%d%d", &side1, &side2, &side3);

            isTriangle(side1, side2, side3);
        }

        case '2':{

            int number;

            printf("Choose a number to do a triangle number: ");
            scanf("%d", &number);

            triangleNumber(number);
        }

        case '3':{

            int toSquare;

            printf("Select a number to square it: ");
            scanf("%d", &toSquare);

            squareNumber(toSquare);
        }

        case '4':{
            /* Question 4
             *
             */

            int possibleSquare;

            printf("Select a number to check if it is a perfect square: ");
            scanf("%d", &possibleSquare);

            isSquareNumber(possibleSquare);
        }
    }// end switch

    return 0;
}