#include<stdio.h>

int user_function_1()
{
int i_uf;
scanf("%d",&i_uf);
return i_uf;
} 

void main()
{
int i_main=3, check=0;
printf("Cien. lietotājs, Tu gribi sasveicinaaties vai atsveicinaaties?\n");
printf("Sasveicinaaties - 1; atsveicinaaties - 2, beigt darbu - 0\n");
while(i_main!=check)
{
 i_main=user_function_1();
 if (i_main==1)
 printf("Well hello!\n");
 else
 printf("Goodbye!\n");
}
printf("Darba beigshana!\n");
}
