# Laboratorijas darbs Nr.1. - Taylor series - atskaite

## Teorija
Izmantojot manas funkcijas exp(-x) Teilora rindas un rekurences izteiksmes, es uzrakstīju programmu, kura skaita funkcijas vērtību, kuru ievada lietotājs.

### Kods
```
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
//  printf("a%d = %e\tS%d = %e\n",k,a,k,S); //Pēdējas 'a' vērtības pārbaude
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
```
Skaitam "a" izmantojot Teilora rindas izteiksmi un pēc tam ciklā izmantojam rekurences izteiksmi. Pēc pēdējas 'a' vērtības testa, es secināju, ka pēdēja 'a' vērtība, kad 'a' nav 0 ir 205!

### Rezultāts
```
Cien. liet., lūdzu ievadi x (piem. - 2.05) - 2.05
y=exp(-2.05)=0.12873490
a0 = 1.000000e+00	S0 = 1.00000000
a205 = -2.964394e-323	S205 = 0.12873490
a499 = -0.000000e+00	S499 = 0.12873490
a500 = 0.000000e+00	S500 = 0.12873490
a999 = -0.000000e+00	S999 = 0.12873490
a1000 = 0.000000e+00	S1000 = 0.12873490

     1000
     ----
     \           k   k
      \      (-1) * x
f(x)= |    --------------
      /         k!
     /
     ----
      k=0

           k
       (-1) * x
R=   --------------
              k-1
       k * (-1)

```

### Analīze
Beigās mēs redzam, ka aprēķināta funkcijas vērtība izmantojot Teilora rindas sakrīt ar funkcijas vērtību.

### Manas funkcijas grafiks
![Funkcijas grafiks](https://github.com/Duz132/RTR105/blob/master/Darbi/1course_1semestr_c_lang/LABORI/exp(-x)_grafiks.png)

