//
// Created by Qian on 24-9-26.
//
#include <math.h>
#include <stdio.h>
int main(void)
{
    const double PI = 3.14159;
    int radius = 100 ;
    double surface_area = 4 * PI * pow(radius,2) ;
    double volumn = 4.0 / 3.0 * PI * pow(radius,3) ;
    printf("%-15.4f : surface_area\n%-15.4f : volumn\n",surface_area,volumn );


    return 0;
}