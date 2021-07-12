/**
 * @file octagon.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, area, interior angle and exterior angle of an octagon
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code octagon(double side, regular_polygon *res){
    if(side==0.0){
        return NULL;
    }
    res->perimeter = 8*side;
    res->area = 2*pow(side,2)*(1+sqrt(2));
    res->interior_angle = 135;
    res->exterior_angle = 45;
    return SUCCESS;
}