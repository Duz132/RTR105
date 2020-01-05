// a0, a1, a2, a3 -> a
#include<stdio.h>
#include<math.h>

int main()
{
 double x=2.05,y,a,S;
 int k,i=0;

 y = sin(x);
 printf("y=sin(2.05)=%.2f\n",sin(x));
 printf("%.2f\t%.2f\n",x,y);
 a = pow(-1,i)*pow(x,2*i+1)/(1.);
 S = a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,S);

 for(k=1;k<=3;k++)
 {
  a = a * (-1) *x*x / ((2*k)*(2*k+1));
  S += a;
  printf("%.2f\t%.2f\t%.2f\n",x,a,S);
 }
}
