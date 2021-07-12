/**
 * @file fun.h
 * @author S.Shruthi 
 * @brief Functions related to Shapes_Calculator  
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALCULATOR_H
#define __CALCULATOR_H

#define PI (3.14);

typedef struct regular_polygon{
    double perimeter;
    double area;
    double interior_angle;
    double exterior_angle;
}regular_polygon;

typedef struct irregular_and_curves{
    double perimeter;
    double area;
}irregular_and_curves;

typedef struct three_dim_other{
    double volume;
    double surface_area;
}three_dim_other;

typedef struct three_dim{
    double volume;
    double lateral_surface_area;
    double total_surface_area;
}three_dim;

typedef enum error_code{
    NULL,
    SUCCESS
}error_code;

error_code equilateral_triangle(double side, regular_polygon *res);
error_code square(double side, regular_polygon *res);
error_code pentagon(double side, regular_polygon *res);
error_code hexagon(double side, regular_polygon *res);
error_code heptagon(double side, regular_polygon *res);
error_code octagon(double side, regular_polygon *res);
error_code enneagon(double side, regular_polygon *res);
error_code decagon(double side, regular_polygon *res);

error_code rectangle(double length, double breadth, irregular_and_curves *res);
error_code rhombus(double diagonal1, double diagonal2, irregular_and_curves *res);
error_code parallellogram(double side, double base, double height, irregular_and_curves *res);
error_code trapezium(double base1, double side1, double base2, double side2, double height, irregular_and_curves *res);
error_code isosceles_triangle(double side, double base, irregular_and_curves *res);
error_code scalene_triangle(double side1, double side2, double side3, irregular_and_curves *res);

error_code circle(double radius, irregular_and_curves *res);
error_code ellipse(double semi_major_axis, double semi_minor_axis, irregular_and_curves *res);

error_code cube(double side, three_dim *res);
error_code cuboid(double length, double breadth, double height, three_dim *res);
error_code sphere(double radius, three_dim_other *res);


error_code cone(double radius, double height, three_dim *res);
error_code cylinder(double radius, double height, three_dim *res);
error_code hemisphere(double radius, three_dim *res);

#endif



