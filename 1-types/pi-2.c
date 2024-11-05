//
// Created by Qian on 24-9-28.
//
#include <stdio.h>
#include <math.h>
int main()
{
    double pi_1 = log(pow(5280.0,3.0)*pow(236674.0+30303.0*sqrt(61.0),3.0)+744.0)/sqrt(427.0);
    double pi_2 = 24 * atan(1.0/8.0) + 8 * atan(1.0/57.0) + 4 * atan(1.0/239.0);
    printf("%.15f\n%.15f\n", pi_1,pi_2);
    return 0;
}