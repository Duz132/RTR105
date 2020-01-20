#include<stdio.h>
#include<math.h>

float f(float x){
 float y;
 y = exp(-x);
 return y;
}

float f(float x);
void main(){
int i, n=2;//, m=1;
float a, b,sum1=0,sum2=0, width, delta_x, integ, area;

printf("Cien. liet.,lūdzu ievadi sākuma robežu(piem. 1) - ");
scanf("%f",&a);
printf("Cien. liet.,lūdzu ievadi beigas robežu(piem. 4) - ");
scanf("%f",&b);
printf("Cien. liet.,lūdzu ievadi precizitāti(piem. 0.00001) - ");
scanf("%f",&delta_x);

//Taisnstūru metode begin
 area = (b-a)*(f(a)+f(b))/2;
 while(fabs(area - integ)>delta_x){
  n = n * 2;
  width=(b-a)/n;
  integ=area;
  area=0;
 for(i=0; i < n; i++) {area = area + width*f(a+i*width);}
 }
 printf("Integrāla vērtība, izmantojot taisnstūru metodi: %.10f\n",area);
//Taisnstūru metode end
//Trapeču metode begin
 n = 2;
 integ = 0;
 area = (b-a)*(f(a)+f(b))/2;
 while(fabs(area - integ)>delta_x){
  n = n * 2;
  width=(b-a)/n;
  integ=area;
  area=0;
// for(i=1; i<n; i++) {area = area + f(a+i*width);}
// area = area + (f(b)+f(a))/2;
// area = area * width;
for(i=1; i<n; i++) {area = area + 2*f(a+i*width);}
area = area * (width/2);
 }
 printf("Integrāla vērtība, izmantojot trapeču metodi: %.10f\n",area);
//Trapeču metode end
//Simpsona metode begin
 integ = 0;
 area = (b-a)*(f(a)+f(b))/2;
 while(fabs(area - integ)>delta_x){
//  m = m * 2;
  n = n * 2;
  width=(b-a)/n;
  integ=area;
  area=0;
}
// for(i=1; i <= m-1; i++) {area = area + 2*(2*f(a+(2*i-1)*width)+f(a+2*i*width));}
// area = area + f(a)+f(b)+4*f(b-width);
// area = area * width/3;
//for(i=1; i<=m-1; i++) {area = area + 2*(2*f(a+(2*i-1)*width)+f(a+2*i*width));}
//area = area * width/3;
//printf("TEST n - %d",n);
for(i=1; i<n; i++){
 if(i%2 == 0)
  sum1 = sum1 + f(a+i*width);
 else
  sum2 = sum2 + f(a+i*width);
}
area = (width/3)*(f(a+0*width) + f(a+n*width) + 2*sum1 + 4*sum2);

 printf("Integrāla vērtība, izmantojot Simpsona metodi: %.10f\n",area);
//Simpsona metode end
}
