/**
 * @file enneagon.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, area, interior angle and exterior angle of an enneagon
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code enneagon(double side, regular_polygon *res){
    if(side==0.0){
        return NULL;
    }
    res->perimeter = 9*side;
    res->area = (9/4)*pow(side,2)*cot(180/9);
    res->interior_angle = 140;
    res->exterior_angle = 40;
    return SUCCESS;
}