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
```
Skaitam "a" izmantojot Teilora rindas izteiksmi un pēc tam ciklā izmantojam rekurences izteiksmi.

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
Pēc dažām saskaitīšanas solīm, beigās trešajā kolonnā mēs redzam funkcijas vērtību punktā 2.05.

### Manas funkcijas grafiks
![Funkcijas grafiks](https://github.com/Duz132/RTR105/blob/master/Darbi/1course_1semestr_c_lang/LABORI/exp(-x)_grafiks.png)

