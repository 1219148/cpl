//
// Created by Qian on 24-9-28.
//
#include <stdio.h>
int main()
{
  int number;
  scanf("%d",&number);
  int a = number / 50;
  number = number - 50 * a;
  int b = number / 20;
  number = number - 20 * b;
  int c = number / 10;
  number = number - 10 * c;
  int d = number / 5;
  number = number - 5 * d;
  int e = number / 1;
  printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
  return 0;
}