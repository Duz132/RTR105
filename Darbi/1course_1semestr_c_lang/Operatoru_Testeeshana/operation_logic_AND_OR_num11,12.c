#include<stdio.h>

void main()
{
char a=0;// a = 0000 1110
char b=1;// b = 0000 1001
unsigned char c,d;
c=a&&b;// logic AND (if a and b <> 0 then 1 else 0)
d=a||b;// logic OR (ja kaut viens elements <> 0 tad 1)
printf("Operācija && %d&&%d rezultāts %d\n",a,b,c);
printf("Operācija || %d||%d rezultāts %d\n",a,b,d);
}
