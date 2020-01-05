#include<stdio.h>
#include<math.h>

int main()
{
 double x=2.05,y,a0,a1,a2,a3,a4,S0,S1,S2,S3,S4;

 y = exp(-x);
 printf("y=exp(-2.05)=%.2f\n",exp(-x));
 printf("%.2f\t%.2f\n",x,y);
 a0 = pow(-1,0)*pow(x,0)/(1.);
 S0 = a0;
 printf("%.2f\t%.2f\t%.2f\n",x,a0,S0);

 a1 = pow(-1,1)*pow(x,1)/(1.*1*2);
 S1 = a0 + a1;
 printf("%.2f\t%.2f\t%.2f\n",x,a1,S1);

 a2 = pow(-1,2)*pow(x,2)/(1.*1*2*3);
 S2 = a0 + a1 + a2;
 printf("%.2f\t%.2f\t%.2f\n",x,a2,S2);

 a3 = pow(-1,3)*pow(x,3)/(1.*1*2*3*4);
 S3 = a0 + a1 + a2 + a3;
 printf("%.2f\t%.2f\t%.2f\n",x,a3,S3);

 a4 = pow(-1,4)*pow(x,4)/(1.*1*2*3*4*5);
 S4 = a0 + a1 + a2 + a3 + a4;
 printf("%.2f\t%.2f\t%.2f\n",x,a4,S4);
}
