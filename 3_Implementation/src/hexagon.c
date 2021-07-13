/**
 * @file hexagon.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, area, interior angle and exterior angle of a hexagon
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code hexagon(double side, regular_polygon *res){
    if(side==0.0){
        return NULL;
    }
    else if(side<0){
        side = fabs(side);
    }
    res->perimeter = 6*side;
    res->area = (3*sqrt(3)*pow(side,2))/2;
    res->interior_angle = 120;
    res->exterior_angle = 60;
    return SUCCESS;
}