#include <stdio.h>
#include "Homework2_MyMath.h"

int main() {
    /* Question 1 (isTriangle)
     *
     */
    int side1, side2, side3 = 0;

    // Get value for side 1
    printf("Enter a value for side 1: ");
    scanf("%d", &side1);

    // Get value for side 2
    printf("Enter a value for side 2: ");
    scanf("%d", &side2);

    // Get value for side 3
    printf("Enter a value for side 3: ");
    scanf("%d", &side3);

    // Test if variables got the input
    //printf("Side 1: %d\n", side1);
    //printf("Side 2: %d\n", side2);
    //printf("Side 3: %d\n", side3);

    // Call function
    isTriangle(side1, side2, side3);

    /* Question 2
     *
     */
 //   triangleNumber();
 //   squareNumber();
//    isSquareNumber();
    return 0;

}