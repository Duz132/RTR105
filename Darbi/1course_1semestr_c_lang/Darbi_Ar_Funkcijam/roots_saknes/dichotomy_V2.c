#include<stdio.h>
#include<math.h>
//liet ievada sk. a "kādam y tu gribi sameklēt atbilstošu x?"
int main()
{
 float a, b=1.5*M_PI, x, delta_x=1.e-5/*0.00001*/,funkca, funkcb, funkcx;
 int k=0;
 printf("Cien. liet, kādam Y tu gribi sameklēt atbilstošu x?");
 scanf("%f",&a);
 printf("a = %f",a);//pārbaude
 funkca = sin(a); funkcb = sin(b);
 if(funkca*funkcb>0){
  printf("Intervālā [%2f:%2f] sin(x) funkcijas ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  return 1;
  }

 printf("sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
 printf("sin(%7.3f)=%7.3f\n",b,sin(b));


 while((b-a)>delta_x){
 k++;
 x = (a+b)/2.;
  if(funkca*sin(x)>0) //pie a=0 fuknca=0 -> reizinājums ir precīzi 0 visu laiku -> b ir 0
   a = x;
  else
   b = x;
 printf("%2d. sin(%7.3f)=%7.3f\t",k,a,sin(a));
 printf("sin(%7.3f)=%7.3f\t",x,sin(x));
 printf("sin(%7.3f)=%7.3f\n",b,sin(b));}

 printf("Sakne atrodas pie x=%.3f, jo sin(x) ir %.3f\n",x,sin(x));
 printf("Intervāls sašaurinājas %d reizes\n",k);
 return 0;
}
