# Laboratorijas darbs Nr.3. - Derivative - atskaite

## Teorija
Programma, kura skaita funkcijas atvasinājuma vērtības. Mana funkcija - exp(-x).

### Kods
```

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
  fprintf(file,"%10.10f\t%10.10f\t%10.10f\n",x,exp(-x),/*-exp(-x));*/(-exp(-x+delta_x)+exp(-x))/delta_x);
  x += delta_x;
 }
}

```
Lietotājs ievada robežas, kur vajag skaitīt funkcijas un funkcijas atvasinājuma vērtības, un precizitāti. Pēc tam visus datus ieraksta failā un ar Gnuplot palīdzību mēs zīmējam funkcijas grafikus.

### Rezultāts
```
Cien, liet., uzraksti lūdzu robežas, kur zīmēt funkciju no a līdz b un precizitāti!
Pi - 3.1415925 => 2Pi - 6.283185
Precizitātes piemērs - 0.01 vai 0.001
PIEMĒRS a=0, b=6.283185, precizitāte=0.0001!
0
6.283185
0.0001
TEST a - 0.000000, b - 6.283185, delta_x - 0.000100

FAILĀ


```

### Analīze


### Manas funkcijas grafiks
![Funkcijas grafiks](https://github.com/Duz132/RTR105/blob/master/Darbi/1course_1semestr_c_lang/LABORI/exp(-x)_grafiks.png)
![Funkcijas un funkcijas atvasinājuma grafiki](https://github.com/Duz132/RTR105/blob/master/Darbi/1course_1semestr_c_lang/LABORI/3ld_derivative_funk_graf.png)
