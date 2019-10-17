#include<stdio.h>

void user_function_1(int i_uf)
{
printf("Well hello for the %d time!\n",i_uf);
} 

void user_function_2(int i_uf)
{
printf("Goodbye for the %d time!\n",i_uf);
}

void main()
{
int i_main=0, check;
printf("Cien. lietotraajs, cik reizes Tu gribi sakt 'Hello' un 'Goodbye'?\n");
scanf("%d",&check);
while(i_main<check)
{
 i_main++;
 user_function_1(i_main);
 user_function_2(i_main);
}
}
//void user_function_4(int i_uf, double d_uf)
//{
//printf("Skaitam: %d reize, tātad %.2f dala(s)!\n",i_uf, d_uf);
//}
