#include<stdio.h>
void main()
{
int number1, number2;
printf("Cien. lietotājs, lūdzu, ievadi slaitli: ");
scanf("%d",&number1);
printf("Cien. lietotājs, lūdzu, ievadi slaitli: ");
scanf("%d",&number2);

if (number1 > number2)
{
printf("Tavs 1. skaitlis %d ir lielāks nekā 2. skaitlis %d\n",number1, number2);
printf("Pretēji ir divi gadījumi - 1. < 2. vai 1.==2.\n");
}
else
{
 printf("Tavs 1. skaitlis %d ir vai nu < nekā 2. skaitlis %d\n",number2, number1);
 printf("vai nu tavs 1. sk %d == ar 2. skaitli %d",number1, number2);
}
}
