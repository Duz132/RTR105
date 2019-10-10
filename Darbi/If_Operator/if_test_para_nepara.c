#include<stdio.h>
void main()
{
int number1, number2;
printf("Cien. lietotājs, lūdzu, ievadi slaitli: ");
scanf("%d",&number1);
printf("Cien. lietotājs, lūdzu, ievadi slaitli: ");
scanf("%d",&number2);

if (number1 > number2)
 printf("Tavs 1. skaitlis %d ir lielāks nekā 2. skaitlis %d\n",number1, number2);
else
 printf("Tavs 2. skaitlis %d ir lielāks nekā 1. skaitlis %d\n",number2, number1);

if (number1%2==0)
printf("Tavs 1. sk %d ir pāra sk!\n",number1);
else
printf("Tavs 1. sk %d ir nepāra sk!\n",number1);

if (number2%2==0)
printf("Tavs 2. sk %d ir pāra sk!\n",number2);
else 
printf("Tavs 2. sk %d ir nepāra sk!\n",number2);

}
