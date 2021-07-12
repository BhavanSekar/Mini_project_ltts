/**
 * @file scalene_triangle.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, and area of a scalene triangle
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code scalene_triangle(double side1, double side2, double side3, irregular_and_curves *res){
    if(side1 == 0.0 || side2 == 0.0 || side3 == 0.0){
        return NULL;
    }
    else{
        int semi = 0;
        res->perimeter = side1 + side2 + side3;
        semi = (side1 + side2 + side3)/2;
        res->area = sqrt(semi*(semi-side1)*(semi-side2)*(semi-side3));
        return SUCCESS;
    }
}