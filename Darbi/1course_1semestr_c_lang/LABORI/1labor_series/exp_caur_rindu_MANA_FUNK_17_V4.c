#include<stdio.h>
#include<math.h>

int main()
{
 double x,y,a,S;
 int k=0;

 printf("Cien. liet., lūdzu ievadi x (piem. - 2.05) - ");
 scanf("%lf",&x);
 y = exp(-x);
 printf("y=exp(-%.8lf)=%.8f\n",x,exp(-x));
 printf("%.8f\t%.8f\n",x,y);
 printf("x\t\ta\t\tS\n");
 a = pow(-1,k)*pow(x,k)/(1.);
 S = a;
 printf("%.8f\t%.8f\t%.8f\n",x,a,S);

 while(k<15){
  k++;
  a = a * (pow(-1,k) * x) / (k * pow(-1,k-1));
  S += a;
  printf("%.8f\t%.8f\t%.8f\n",x,a,S);
 }
}
