/**
 * @file ellipse.c
 * @author S.Shruthi
 * @brief Calculates the perimeter(circumference) and area of an ellipse
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code ellipse(double semi_major_axis, double semi_minor_axis, irregular_and_curves *res){
    if(semi_major_axis == 0.0 || semi_minor_axis == 0.0){
        return NULL;
    }
    res->perimeter = 2*sqrt((pow(semi_major_axis,2)+pow(semi_minor_axis,2))/2)*PI;
    res->area = semi_major_axis*semi_minor_axis*PI;
    return SUCCESS;
}