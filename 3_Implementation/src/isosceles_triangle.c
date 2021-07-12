/**
 * @file isosceles_triangle.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, and area of an isosceles triangle
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code isosceles_triangle(double side, double base, irregular_and_curves *res){
    if(side == 0.0 || base == 0.0){
        return NULL;
    }
    res->perimeter = 2*side + base;
    res->area = (1/2)*(sqrt(pow(side,2) - pow((base/2),2)))*base;
    return SUCCESS;
}