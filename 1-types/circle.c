//
// Created by Qian on 24-9-26.
//
#include <stdio.h>
int main(void)
{
  double pi = 3.14159;
  int radius = 10 ;
  double circumference = 2 * pi * radius ;
  double area = pi * radius * radius ;
  printf("radius = %d\ncircumference = %.2f\narea = %.2f\n", radius , circumference , area);


  return 0;
}
