#include<stdio.h>
#include<math.h>

int main()
{
 double x,y,a,S;
 int k=0;

 printf("Cien. liet., lūdzu ievadi x (piem. - 2.05) - ");
 scanf("%lf",&x);
 y = exp(-x);
 printf("y=exp(-%.2lf)=%.8f\n",x,exp(-x));
 a = pow(-1,k)*pow(x,k)/(1.);
 S = a;

 while(k<1000){
  if(k==0)
   printf("a0 = %e\tS0 = %.8f\n",a,S);
  k++;
  a = a * (pow(-1,k) * x) / (k * pow(-1,k-1));
  S += a;
//  printf("a%d = %e\tS%d = %e\n",k,a,k,S);
  if(k==205)
   printf("a205 = %e\tS205 = %.8f\n",a,S);
  if(k==499)
   printf("a499 = %e\tS499 = %.8f\n",a,S);
  if(k==500)
   printf("a500 = %e\tS500 = %.8f\n",a,S);
  if(k==999)
   printf("a999 = %e\tS999 = %.8f\n",a,S);
 }
 printf("a1000 = %e\tS1000 = %.8f\n",a,S);
 printf("\n");
 printf("     1000\n");
 printf("     ----\n");
 printf("     \\           k   k\n");
 printf("      \\      (-1) * x\n");
 printf("f(x)= |    --------------\n");
 printf("      /         k!\n");
 printf("     /\n");
 printf("     ----\n");
 printf("      k=0\n");

 printf("\n");
 printf("           k\n");
 printf("       (-1) * x\n");
 printf("R=   --------------\n");
 printf("              k-1\n");
 printf("       k * (-1)\n");
}
