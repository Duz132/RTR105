#include<stdio.h>
#include<math.h>

void main(){
 float a,b,x,delta_x;
 FILE *file;

 file=fopen("derivative3lab.dat","w");

 printf("Cien, liet., uzraksti lūdzu robežas, kur zīmēt funkciju no a līdz b un precizitāti!\n");
 printf("Pi - 3.1415925 => 2Pi - 6.283185\n");
 printf("Precizitātes piemērs - 0.01 vai 0.001\n");
 printf("PIEMĒRS a=0, b=6.283185, precizitāte=0.0001!\n");
 scanf("%f %f %f",&a,&b,&delta_x);
 printf("TEST a - %f, b - %f, delta_x - %f\n",a,b, delta_x);
 fprintf(file,"\tx\t\te^-x\t\t(e^-x)\'\n");
 x = a;
 while(x<b){
  fprintf(file,"%10.5f\t%10.5f\t%10.5f\n",x,exp(-x),/*-exp(-x));*/(-exp(-x+delta_x)+exp(-x))/delta_x);
  x += delta_x;
 }
}
