# Laboratorijas darbs Nr.5. - Statictics - atskaite

## Teorija
  Izmantojot zināšanas un dažādus paņēmienus, atrast simbolu rindas maksimumu, minimumu, mediānu, modu, vīdēju arītmetisko un uzrakstīt rindu alfabeta secībā.

### Kods
```
#include<stdio.h>
#include<string.h>

void main(){
char s[100], moda[10], temp;
int i, j, p=0, m, SimbMax=0, check=1, med=0, max=65, min=122, avg=0;//'A' = 65, 'z' = 122

printf("Cien. liet., ievadi lūdzu simbolu rindu!\n");
scanf("%s",&s);
printf("Jūsu simboli - %s\n",s);

//ALF SEC BEGIN
for(i=0; i<strlen(s)-1; i++)
{
 for(j=i+1; j<strlen(s); j++)
 {
  if(s[i]>s[j])
  {
   temp = s[i];
   s[i] = s[j];
   s[j] = temp;
  }
 }
}
printf("Jūsu rinda alf sēcībā burti - %s\n",s);
printf("Jūsu rinda alf secībā burtu ASCII kodi - \n");
for(i=0; s[i] != '\0' ; i++)
{
 printf("%d ",s[i]);
}
//ALF SEC END
//MIN MAX AVERAGE BEGIN
for (i=0;i<strlen(s);i++)
{
 if(s[i]>max) {max = s[i];}
 if(s[i]<min) {min = s[i];}
 avg=avg+s[i];
}
//MIN MAX AVERAGE END
//MED BEGIN
if(strlen(s)%2 == 1) {med = s[strlen(s)/2];}
if(strlen(s)%2 == 0) {med = (s[strlen(s)/2] + s[strlen(s)/2-1])/2;}
//MED END
//MODA BEGIN
for (i=0; i<strlen(s)-1; i++)
{
 m=0;
 for (j=i+1; j<strlen(s); j++)
 {
  if (s[i] == s[j]) {
  m++;
  }
 }
 if (m>SimbMax && m != 0) {
  p=0;
  SimbMax=m;
  moda[p]=s[i];
  p++;
 }
 else if (m == SimbMax) {
  moda[p]=s[i];
  p++;
 }
}
for (i=0; i<strlen(s); i++)
{
 if (s[i] == moda[i])
  check++;
}
if (check == strlen(s))
 printf("\nRindā modas nav!");
else
{
 printf("\nRindas moda - ");
 for (i=0; i<p; i++)
  printf("%d ",moda[i]);
}
//MODA END
printf("\nRindas min - %d\n",min);
printf("Ridnas max - %d\n",max);
printf("Rindas vidēja vērtība - %d\n",avg/strlen(s));
printf("Rindas mediāna - %d\n",med);
}
```
Kodas daļam ir savi nosaukumi (begin, end), lai kods būtu vieglāk apskatāms.
Visgrūtākais bija atrast modu, tāpēc pirmkārt, atrodam visus simbolu atkārtojumus pirmo reizi (m), pēc tam pirmo burtu, kuru mēs salīdzinājam ar citām, ierakstam stringā moda un fiksējam cik reizes viņa atkārtojas (SimbMax), lai pēc tam burti, kuri atkārtosies, bet mazāk reizes, nerakstīt stringā. Arī ir daļa, kura ieraksta burtu, ja viņa atkārtojas kā iepriekšēja(m=SimbMax), bet es pamaniju tādu lietu, ka šajā daļā, ja rindā modas nav, tad visi simboli ierakstīsies stringā, tāpēc ir daļa "check", kura atbilst par simbolu vienādību modas stringā un galvenā stringā(=> ja viņi ir vienādi, tad modas nav). 

### Rezultāts
```
Cien. liet., ievadi lūdzu simbolu rindu!
abcaabbA
Jūsu simboli - abcaabbA
Jūsu rinda alf sēcībā burti - Aaaabbbc
Jūsu rinda alf secībā burtu ASCII kodi - 
65 97 97 97 98 98 98 99 
Rindas moda - 97 98 
Rindas min - 65
Ridnas max - 99
Rindas vidēja vērtība - 93
Rindas mediāna - 97


```

### Analīze
  
Rezultātā simbolu rinda bija uzrakstīta alfabeta sēcībā un izanalīzēta.

