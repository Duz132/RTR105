#include<stdio.h>
#include<string.h>

void main(){
char s[100],temp,prov, max = 'A', min = 'z';
int i, j, kolvo=0, garums=0, avg=0, position=0;

printf("Cien. liet., ievadi lūdzu simbolu rindu!\n");
scanf("%s",&s);
printf("Tavi simboli - %s\n",s);

//ALF SEC BEGIN
for(i=0; i<strlen(s)-1; i++) {
 for(j=i+1; j<strlen(s); j++) {
  if(s[i]>s[j]) {
   temp = s[i];
   s[i] = s[j];
   s[j] = temp;
  }
 }
}

printf("Sorted string - %s\n",s);
//ALF SEC END
//MIN MAX AVERAGE BEGIN
for (i=0;i<n;i++)
{
 if(s[i]>max) {max = s[i];}
 if(s[i]<min) {min = s[i];}
 avg=avg+s[i];
}

printf("Teikuma min - %c\n",min);
printf("Teikuma max - %c\n",max);
printf("Teikuma vid - %d\n",avg);
//printf("Teikuma med - %c\n",s[garums/2]);
//MIN MAX END
//MODAS TEMP
//for (i=0;i<strlen(s);i++)
//{
// temp=s[i];
// for (n=0;n<strlen(s);n++)
// {
//  if(s[n]==temp)
//   kolvo++;
// }
// if(kolvo>2 && temp != prov)
// {
//  printf("Temo moda - %c\n",temp);
//  prov=temp;
// }
//kolvo=0;
//}
//MODAS TEMP
}
