/**
 * @file equilateral_triangle.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, area, interior angle and exterior angle of an equilateral trianlge
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code equilateral_triangle(double side, regular_polygon *res){
    if(side==0.0){
        return NULL;
    }
    res->perimeter = 3*side;
    res->area = (sqrt(3)/4)*(pow(side,2));
    res->interior_angle = 60;
    res->exterior_angle = 120;
    return SUCCESS;
}
