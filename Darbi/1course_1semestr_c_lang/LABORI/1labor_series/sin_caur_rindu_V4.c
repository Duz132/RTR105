// a0, a1, a2, a3 -> a
#include<stdio.h>
#include<math.h>

int main()
{
 double x,y,a,S;
 int k=0;

 printf("Cien. liet., ievadi lūdzu x (piem. - 2.05) - ");
 scanf("%lf",&x);

 y = sin(x);
 printf("\ny=sin(2.05)=%.2f\n",sin(x));
 printf("%.2f\t%.2f\n",x,y);
 a = pow(-1,k)*pow(x,2*k+1)/(1.);
 S = a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 while(k<10){
  k++;
  a = a * (-1) *x*x / ((2*k)*(2*k+1));
  S += a;
  printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
 }
}
