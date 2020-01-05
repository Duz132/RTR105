#include<stdio.h>
#include<math.h>

int main()
{
 double x=2.05,y,a,S;
 int k,i=0;

 y = exp(-x);
 printf("y=exp(-2.05)=%.2f\n",exp(-x));
 printf("%.2f\t%.2f\n",x,y);
 a = pow(-1,i)*pow(x,i)/(1.);
 S = a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,S);

 for(k=1;k<=3;k++)
 {
  a = a * (-1) *x*x / ((2*k)*k);
  S += a;
  printf("%.2f\t%.2f\t%.2f\n",x,a,S);
 }
}
