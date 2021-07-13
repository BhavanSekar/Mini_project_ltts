/**
 * @file heptagon.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, area, interior angle and exterior angle of a heptagon
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code heptagon(double side, regular_polygon *res){
    if(side==0.0){
        return NULL;
    }
    else if(side<0){
        side = fabs(side);
    }
    res->perimeter = 7*side;
    res->area = (7/4)*pow(side,2)*cot(180/7);
    res->interior_angle = 128.57;
    res->exterior_angle = 51.43;
    return SUCCESS;
}