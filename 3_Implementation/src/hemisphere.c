/**
 * @file hemisphere.c
 * @author S.Shruthi
 * @brief Calculates the volume, lateral surface area and the total surface area of the hemisphere
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code hemisphere(double radius, three_dim *res){
    if(radius == 0.0){
        return NULL;
    }
    res->volume = (2/3)*pow(radius,3)*PI;
    res->lateral_surface_area = 2*pow(radius,2)*PI;
    res->total_surface_area = 3*pow(radius,2)*PI;
    return SUCCESS;
}