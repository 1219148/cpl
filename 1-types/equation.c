//
// Created by Qian on 24-9-28.
//
#include <stdio.h>
#include <math.h>

int main()
{
  int p;
  int q;
  double x1;
  scanf("%d%d",&p,&q);
  if(p>0) {
    x1 = pow(-q/2.0+pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0)-
    pow(q/2.0+pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0);
  }
  else if(p<0) {
    if(q>0)
      {
      x1 = -pow(q/2.0-pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0)-
      pow(q/2.0+pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0);
    }
    else if(q<0)
      {
      x1 = pow(-q/2.0+pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0)+
      pow(-q/2.0-pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0);
    }
    else if(q==0)
    {
      x1 = pow(-q/2.0+pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0)-
      pow(q/2.0+pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0);
    }
  }
  else if(p==0) {
    x1 = pow(-q/2.0+pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0)-
    pow(q/2.0+pow(pow(q/2.0,2.0)+pow(p/3.0,3.0),1.0/2.0),1.0/3.0);
  }
  printf("%.3f",x1);
  return 0;
}
