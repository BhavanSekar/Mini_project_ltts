/**
 * @file decagon.c
 * @author S.Shruthi 
 * @brief Calculates the perimeter, area, interior angle and exterior angle of a decagon
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code decagon(double side, regular_polygon *res){
    if(side==0.0){
        return NULL;
    }
    else if(side<0){
        side = fabs(side);
    }
    res->perimeter = 10*side;
    res->area = (5/2)*pow(side,2)*sqrt(5+(2*sqrt(5)));
    res->interior_angle = 144;
    res->exterior_angle = 36;
    return SUCCESS;
}