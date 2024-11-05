//
// Created by Qian on 24-9-28.
//
#include <ctype.h>
#include <stdio.h>
int main()
{
  char name[21];
  int pre;
  double frac;
  double factor;
  char unit;
  scanf("%s%d%lf%lf %c",name,&pre,&frac,&factor,&unit);
  double sciEexp = pre + frac;
  double conv = sciEexp * factor;
  printf("%.2s: %d (%.5f) | %.5E %.5f %c",name,pre,frac,sciEexp,conv,toupper(unit));
  return 0;
}