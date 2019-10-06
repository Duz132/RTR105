#include<stdio.h>

void main()
{
char a=14;// a = 0000 1110
char b=9;// b = 0000 1001
unsigned char c,d,e,f;
c=a&b;// logic AND (if a and b = 1 then 1 else 0)
d=a|b;// logic OR (ja kaut viens ir 1 tad 1)
e=~a;// logic INVERSIJA (inversija 0>>1 1>>0)
f=a^b;// logic OR exception (ja tikai viens ir 1 tad 1 (1 un 0 >> 1; 1 un 1>>0))
printf("Operācija & %d&%d rezultāts %d\n",a,b,c);//c=8=0000 1000
printf("Operācija | %d|%d rezultāts %d\n",a,b,d);//d=15=0000 1111
printf("Operācija ~ ~%d rezultāts %d\n",a,e);//e=241=1111 0001
printf("Operācija ^ %d^%d rezultāts %d\n",a,b,f);//f=7=0000 0111
}
