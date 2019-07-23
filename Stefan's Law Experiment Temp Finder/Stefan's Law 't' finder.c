#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
{
    float r,R,c,t,T;
    r = 23.73;
  printf("Enter Rt\n");
  scanf("%f",&R);
  c = R/r;
  printf("c = %f\n",c);
  t = 3618.05*(-1+sqrt(1-0.1061*(1-c)));
  printf("Value Of t is %f\n",t);
  T = t + 273;
  printf("T in Kelvin is %f",T);
  getch();
}
