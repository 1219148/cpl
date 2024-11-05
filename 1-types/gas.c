//
// Created by Qian on 24-9-28.
//
#include <stdio.h>
#include <math.h>

int main()
{
    double P;
    double L;
    double T;
    scanf("%lf %lf %lf", &P, &L, &T);
    double V = pow(L,3.0);
    double R = 8.314;
    double n = (P*V)/(R*T);
    printf("%.4e", n);
    return 0;
}
