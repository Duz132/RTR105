#include<stdio.h>

void main()
{
int a=10;//atmiņā būs mainīgais a (1 byte 00001010)
int b=2, c=10,d,e,f,g;
d=a==b;
e=a==c;
f=a!=b;
g=a!=c; 
printf("Operācija == %d==%d rezultāts %d\n",a,b,d);//0 equal
printf("Operācija == %d==%d rezultāts %d\n",a,c,e);//1
printf("Operācija != %d!=%d rezultāts %d\n",a,b,f);//1 not equal
printf("Operācija != %d!=%d rezultāts %d\n",a,c,g);//0
}
