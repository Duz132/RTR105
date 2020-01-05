#include<stdio.h>
#include<string.h>

void removeChar(char *s, char garbage){
char *src, *dst;
for (src = dst = s; *src != '\0'; src++){
 *dst = *src;
 if (*dst != garbage) dst++;
}
*dst = '\0';
}

void main(){
char s[100],temp,prov, max = 'A', min = 'z', alf[100];
int i,n,kolvo=0,garums=0, mid=0, position=0;

printf("Cien. liet., ievadi lūdzu simbolu rindu!\n");
scanf("%[^\n]",&s);
printf("Tavi simboli - %s\n",s);
//removeChar(s, 'b');
//printf("Char without b - %s\n",s);
for (i=0;i<strlen(s);i++)
{
 if(s[i] != ' ')
  {
   garums++;
   if(s[i]>max)
   max = s[i];
   mid=mid+s[i];
  }
}

//ALF SEC BEGIN
for (n=0;n<strlen(s);n++)
{

for (i=0;i<strlen(s);i++)
{
   if(s[i] != ' ')
    {
     if(s[i]<min)
     {
      min = s[i];
      position=i;
     }
    }

}
alf[n]=min;
position=0;
removeChar(s, min);
}
//TEST
printf("ALFABETS - %s\n",alf);
//ALF SEC END

printf("Teikuma garums - %d\n",garums);
printf("Teikuma min - %c\n",min);
printf("Teikuma max - %c\n",max);
printf("Teikuma vid - %d\n",mid/garums);
//printf("Teikuma med - %c\n",s[garums/2]);
//MODAS TEMP
for (i=0;i<strlen(s);i++)
{
 temp=s[i];
 for (n=0;n<strlen(s);n++)
 {
  if(s[n]==temp)
   kolvo++;
 }
 if(kolvo>2 && temp != prov)
 {
  printf("Temo moda - %c\n",temp);
  prov=temp;
 }
kolvo=0;
}
//MODAS TEMP
}
