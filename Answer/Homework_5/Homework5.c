// Steven Sousa / Procedural Programming / Homework 5 / 4Cs

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    FILE *myFile = fopen("C:\\Users\\Steven\\Documents\\CS\\C\\Answer\\HW5.txt", "r");

    // read file into array
    int initialVelocity[4];
    int initialAngle[4];

    // Check if file is empty
    if(myFile == NULL){
        printf("Error! File is empty.\n");
        exit(0);
    }

    for(int i = 0; i < 12; i = i + 3){
        fscanf(myFile, "%d", &initialVelocity[i]);
        printf("%d", initialVelocity[i]);
    }
    return 0;
}
