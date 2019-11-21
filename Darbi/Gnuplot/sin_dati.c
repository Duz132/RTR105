#include<stdio.h>
#include<math.h>

int main()
{
 FILE *fptr;
 float a,x,delta_x,delta_y,b,y;
 a = 0;
 b = 2*M_PI;

 fptr=fopen("sin_dati.dat","w");
 x = a;
 y = a;
 delta_x = 0.1;
 delta_y = 0.1;
 while(x<b)
 {
  printf("%10.1f %10.1f %10.1f %10.1f\n",x,sin(x),y,sin(y));
  x += delta_x;
  y += delta_y;
 }
 fclose(fptr);
}
