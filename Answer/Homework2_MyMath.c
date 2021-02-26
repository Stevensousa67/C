//
// Created by Steven on 2/20/2021.
//

#include <stdio.h>
#include <stdbool.h>
#include "Homework2_MyMath.h"
// Question 1 function
int isTriangle(int side1, int side2, int side3){

    if(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
        printf("False!\n");
    else
        printf("True!\n");
    return 0;
}
// Question 1 Unit Test
int myIsTriangleUnitTest(){

    // Test 1
    int a = 5, b = 2, c = 4;
    isTriangle(a,b,c);

    // Test 2
    a = 1, b = 2, c = 3;
    isTriangle(a,b,c);

    return 0;
}
// Question 2 function
int triangleNumber(int number){

    int result = 0;

    for(int counter = 0; counter <= number; counter++){
        result = result + counter;
    }

    printf("Result: %d\n", result);
    return 0;
}
// Question 2 Unit Test
int myTriangleNumberUnitTest(){

    // Test 1
    int a = 3; // should return 3
    triangleNumber(a);

    // Test 2
    a = 11; // should return 66
    triangleNumber(a);

    return 0;
}
// Question 3 function
int squareNumber(int toSquare){

    int squared = toSquare*toSquare;

    printf("The square is: %d\n", squared);

    return 0;
}
// Question 3 Unit Test
int mySquareNumberUnitTest(){

    // Test 1
    int a = 13; // should return 169
    squareNumber(a);

    // Test 2
    a = -4; // should return 16
    squareNumber(a);

}
//Question 4 function
int isSquareNumber(int possibleSquare){

    bool isSquare = false;
    int factor_count = 0;

    // count how many factors in a given number
    for(int i = 1; i <= possibleSquare; i++) {
        if (possibleSquare % i == 0)
            factor_count++;
    }

    // if number of factors is even, return false. If odd, return true
    if(factor_count % 2 == 0) {
        printf("%d\n", isSquare);
    }
    else {
        isSquare = true;
        printf("%d\n", isSquare);
    }
    return 0;
}
// Question 4 Unit Test
int myIsSquareNumberUnitTest(){

    // Test 1
    int a = 16; // should return 1
    isSquareNumber(a);

    // Test 2
    a = 8; // should return 0
    isSquareNumber(a);
}
