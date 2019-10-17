#include<stdio.h>

void user_function_1()
{
printf("Well hello!\n");
} 
void user_function_2();

void main()
{
int funk_num;
printf("Cien. lietotaajs, vai Juus gribat sasveicinaaties vai atsveicinaaties?\n");
printf("Sasveicinaaties - 1; Atsveicinaaties - 2; beigs - 0\n");
while(funk_num>0)
{
scanf("%d",&funk_num);
if (funk_num==1)
user_function_1();
else
user_function_2();
}
}
void user_function_2()
{
printf("Goodbye!\n");
} 
