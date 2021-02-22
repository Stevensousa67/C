//
// Created by Steven on 2/20/2021.
//

#include <stdio.h>
#include "Homework2_MyMath.h"

int isTriangle(int side1, int side2, int side3){

    int max, min;

    // Create a conditional statement that will assign the highest value between side 1 and 2 to variable max.
    // This made more sense to me when doing the subtraction test to see if the given values form a triangle.
    if(side1 >= side2){
        max = side1;
        min = side2;
    }
    else{
        min = side1;
        max = side2;
    }

    // Subtraction test to see if given values form a triangle.
    if(max - min < side3){
        printf("Those values provide a triangle!");
    }
    else{
        printf("Sorry, but those values do not form a triangle.");
    }
}

int triangleNumber(int number){

    int result = 0;

    for(int counter = 0; counter <= number; counter++){
        result = result + counter;
    }

    printf("Result: %d", result);
}

int squareNumber(int toSquare){

    int squared = toSquare*toSquare;

    printf("The square is: %d", squared);

}

int isSquareNumber(int possibleSquare){

    int root;

    if(root)

}