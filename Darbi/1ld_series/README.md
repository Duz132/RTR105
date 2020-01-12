# Laboratorijas darbs Nr.1. - Taylor series - atskaite

## Teorija
Izmantojot manas funkcijas exp(-x) Teilora rindas un rekurences izteiksmes, es uzrakstīju programmu, kura skaita funkcijas vērtību, kuru ievada lietotājs.
Teilora rindas izteiksme:
            1000
            -----
            \               k     k
              \         (-1)  *  x
f(x) =       |      --------------------
              /             k!
            /
            ------
             k=0
Rekurences izteiksme:
            k
        (-1)  *  x
R = -------------------
                   k-1
         k  *  (-1)
Izteiksmes ir slikti redzamas, tāpēc zemāk ir bilde ar izteiksmēm.

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
y=exp(-2.05000000)=0.12873490
2.05000000	0.12873490
x		a		S
2.05000000	1.00000000	1.00000000
2.05000000	-2.05000000	-1.05000000
2.05000000	2.10125000	1.05125000
2.05000000	-1.43585417	-0.38460417
2.05000000	0.73587526	0.35127109
2.05000000	-0.30170886	0.04956224
2.05000000	0.10308386	0.15264610
2.05000000	-0.03018884	0.12245725
2.05000000	0.00773589	0.13019314
2.05000000	-0.00176206	0.12843108
2.05000000	0.00036122	0.12879230
2.05000000	-0.00006732	0.12872498
2.05000000	0.00001150	0.12873648
2.05000000	-0.00000181	0.12873467
2.05000000	0.00000027	0.12873494
2.05000000	-0.00000004	0.12873490

```

### Analīze
Pēc dažām saskaitīšanas solīm, beigās trešajā kolonnā mēs redzam funkcijas vērtību punktā 2.05.

### Manas funkcijas grafiks
![Funkcijas grafiks](https://github.com/Duz132/RTR105/blob/master/Darbi/1course_1semestr_c_lang/LABORI/exp(-x)_grafiks.png)
![Teilora un rekurences izteiksmes](https://github.com/Duz132/RTR105/blob/master/Darbi/1course_1semestr_c_lang/LABORI/Teilora_Rekurences_Izt.png)
