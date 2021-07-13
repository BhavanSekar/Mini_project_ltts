/**
 * @file circle.c
 * @author S.Shruthi
 * @brief Calculates the perimeter(circumference) and area of a circle
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code circle(double radius, irregular_and_curves *res){
    if(radius == 0.0){
        return NULL;
    }
    else if(radius<0){
        radius = fabs(radius);
    }
    res->perimeter = 2*radius*PI;
    res->area = pow(radius,2)*PI;
    return SUCCESS;
}