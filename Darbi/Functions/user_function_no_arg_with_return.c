#include<stdio.h>

int user_function_5()
{
int i_uf;
printf("Cienījamais lietotājs, lūdzu, ievadi vienu skaitli (ar 5 jautājumi beigsies)\n");
scanf("%d",&i_uf);
return i_uf;
} 

void main()
{
int i_main=0, N=5;

i_main=user_function_5();

while(i_main!=N)
{
printf("Reaģejot uz manas lietotāja funkcijas darbībam, Tu esi ievadījis %d\n",i_main);
i_main=user_function_5();
}
printf("Tā kā esi ievadījis 5, tda jautājumu vairs nav!\n");
}
