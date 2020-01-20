# Laboratorijas darbs Nr.4. - Integral - atskaite

## Teorija
Izmantojot taisnstūru, trapeču un Simpsona metodes, vajadzēja atrast manas funkcijas y=exp(-x) integrāla vērtības (laukuma vērtību starp funkcijas grafiku un OX asi noteiktā intervālā). Arī es izmantoju dažus tīmekļalapus, lai atrastu teoriju par metodēm: http://www.mathcs.emory.edu/~cheung/Courses/170/Syllabus/07/rectangle-method.html; https://www.geeksforgeeks.org/trapezoidal-rule-for-approximate-value-of-definite-integral/; https://www.codewithc.com/c-program-for-simpson-1-3-rule/

### Kods
```
#include<stdio.h>
#include<math.h>

float f(float x){
 float y;
 y = exp(-x);
 return y;
}

float f(float x);
void main(){
int i, n=2;
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
for(i=1; i<n; i++) {area = area + 2*f(a+i*width);}
area = area * (width/2);
 }
 printf("Integrāla vērtība, izmantojot trapeču metodi: %.10f\n",area);
//Trapeču metode end
//Simpsona metode begin
 integ = 0;
 area = (b-a)*(f(a)+f(b))/2;
 while(fabs(area - integ)>delta_x){
  n = n * 2;
  width=(b-a)/n;
  integ=area;
  area=0;
}
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
```
Varbūt es nepareizi uzrakstīju formulas, tāpēc kodu var uzlabot, uzlabojot metodes formulas.

### Rezultāts
```
Cien. liet.,lūdzu ievadi sākuma robežu(piem. 1) - 1
Cien. liet.,lūdzu ievadi beigas robežu(piem. 4) - 4
Cien. liet.,lūdzu ievadi precizitāti(piem. 0.00001) - 0.00001
Integrāla vērtība, izmantojot taisnstūru metodi: 0.3495714068
Integrāla vērtība, izmantojot trapeču metodi: 0.3495559096
Integrāla vērtība, izmantojot Simpsona metodi: 0.3495632410

```

### Analīze
Rezultātā programma aprēķināja integrāla vērtības ar dažādām metodēm. Salīdzinot ar atbildi, kuru es dabūju ar Wol
framalpha palīdzību(bildes), es varu pateikt, ka vislabākā metode ir Simpsona metode.
### Bildes
![](https://github.com/Duz132/RTR105/tree/master/Darbi/1course_1semestr_c_lang/LABORI/4ld_integral_check.png)
![](https://github.com/Duz132/RTR105/tree/master/Darbi/1course_1semestr_c_lang/LABORI/4ld_exp(-x)_w_paint.png)
