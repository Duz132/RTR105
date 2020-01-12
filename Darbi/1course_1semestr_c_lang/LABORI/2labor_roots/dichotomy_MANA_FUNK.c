#include<stdio.h>
#include<math.h>
int main()
{
 float a, b, x, delta_x,funkca, funkcb, funkcx;
 int k=0;

 printf("Cien. liet, kādam Y tu gribi sameklēt atbilstošu x (piem. 0.01)? ");
 scanf("%f",&a);
 printf("\nCien. liet, ievadi lūdzu b (piem. 4.71238875(1.5Pi)) - ");
 scanf("%f",&b);
 printf("\nCien. liet., ievadi lūdzu precizitāti (piem. 0.00001) - ");
 scanf("%f",&delta_x);
 printf("\na = %f",a);//pārbaude
 printf("\nb = %f",b);//pārbaude
 printf("\ndelta_x = %f\n",delta_x);//pārbaude

 funkca = exp(-a);
 funkcb = exp(-b);
 if(funkca*funkcb>0){
  printf("Intervālā [%2f:%2f] exp(-x) funkcijas ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  printf("Iterācijas nebija\n");
  return 1;
  }

 printf("exp(-%7.3f)=%7.3f\t\t\t\t",a,exp(-a));
 printf("exp(-%7.3f)=%7.3f\n",b,exp(-b));


 while((b-a)>delta_x){
 k++;
 x = (a+b)/2.;
  if(funkca*exp(-x)>0)
   a = x;
  else
   b = x;
 printf("%2d. exp(-%7.3f)=%7.3f\t",k,a,exp(-a));
 printf("exp(-%7.3f)=%7.3f\t",x,exp(-x));
 printf("exp(-%7.3f)=%7.3f\n",b,exp(-b));}

 printf("Sakne atrodas pie x=%.3f, jo exp(-x) ir %.3f\n",x,exp(-x));
 printf("Intervāls sašaurinājas %d reizes\n",k);
 return 0;
}
