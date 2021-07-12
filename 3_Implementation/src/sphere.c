/**
 * @file sphere.c
 * @author S.Shruthi
 * @brief Calculates the volume and the surface area of the sphere
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code sphere(double radius, three_dim_other *res){
    if(radius == 0.0){
        return NULL;
    }
    res->volume = (4/3)*pow(radius,3)*PI;
    res->surface_area = 4*pow(radius,2)*PI;
    return SUCCESS;
}