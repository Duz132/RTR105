#include <stdio.h>
#include <limits.h>
int main()
{
long long int a = 50000;
long long int b = 1000000;
long long int c = a * b; //kaads ir sagaidaams rezultaats?

printf("int datu tipa izmers ir: %ld baiti \n", sizeof(int));
printf("Apreekjinam a un b reizinaajumu :\n");
printf("a = %lld, b = %lld \n", a, b);
printf("c = a * b = %lld * %lld = %lld \n", a,b,c); //rezultaats uz ekrana
}
