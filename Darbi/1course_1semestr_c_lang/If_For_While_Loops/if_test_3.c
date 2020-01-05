#include<stdio.h>
#include<time.h>
void main()
{
int number, clock_t, start_t, end_t, total_t;
printf("Cien. lietotājs, lūdzu, ievadi slaitli: ");
scanf("%d",&number);
start_t = clock();

if (number%2==0)
{
 printf("Tavs skaitlis ir pāra skaitlis \n");
}
else
{
printf("Tavs sk nav pāra sk\n");
}
end_t=clock();
//total_t=(double)(end_t - start_t)/ clocks_per_sec
printf("Aprēķins aizņēma no %ld līdz %ld -> %ld\n",37,start_t, end_t, end_t+start_t);
start_t=clock();
if ( (number<<31)>>31) )
{
 printf("Tavs skaitlis %d ir pāra skaitlis \n",number);
}
else
{
printf("Tavs sk %d nav pāra sk\n",number);
}
end_t=clock();
printf("Aprēķins aizņēma no %ld līdz %ld -> %ld\n",start_t, end_t, end_t+start_t);
}
