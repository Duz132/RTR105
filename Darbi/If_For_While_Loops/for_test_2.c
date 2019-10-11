#include<stdio.h>
void main()
{
int number1, number2, yes_no,i,j;
for(yes_no=1, i=0 ; yes_no && (i<5) ; i++ )
{
printf("Cien. lietotājs, lūdzu, ievadi slaitli: ");
scanf("%d",&number1);
printf("Cien. lietotājs, lūdzu, ievadi slaitli: ");
scanf("%d",&number2);

if (number1 > number2)
printf("Tavs 1. skaitlis %d ir lielāks nekā 2. skaitlis %d\n",number1, number2);
else
printf("Tavs 2. skaitlis %d ir lielāks nekā 1. skaitlis %d\n",number2, number1);
if (i<4)
{
printf("Liet, gribi turpināt? (šī bija %d reize)",i+1);
printf("jā - jebkurš sk izņemot 0; nē - 0)\n");
scanf("%d",&yes_no);
}
else
{
printf("Tā bija tava pedējā reize!\n");
}
}
}
