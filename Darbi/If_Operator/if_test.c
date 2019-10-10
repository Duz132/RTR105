#include<stdio.h>
void main()
{
int number1, number2;
printf("Cien. lietotājs, lūdzu, ievadi slaitli: ");
scanf("%d",&number1);
printf("Cien. lietotājs, lūdzu, ievadi slaitli: ");
scanf("%d",&number2);

if (number1==number2)
printf("Tavs 1. skaitlis %d ir vienāds ar 2. skaitlis %d\n",number1, number2);
else if (number1 > number2)
printf("Tavs 1. skaitlis %d ir lielāks nekā 2. skaitlis %d\n",number1, number2);
else
printf("Tavs 2. skaitlis %d ir lielāks nekā 1. skaitlis %d\n",number2, number1);
printf("Šīs teksts parādīsies jebkurā gadījumā\n");
}
