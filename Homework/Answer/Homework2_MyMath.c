//
// Created by Steven on 2/20/2021.
//

#include <stdio.h>
#include <stdbool.h>
#include "Homework2_MyMath.h"

int isTriangle(int side1, int side2, int side3){

    if(side1 - side2 < side3 || side2 - side1 < side3){
        return true;
    }
    else{
        return false;
    }
}