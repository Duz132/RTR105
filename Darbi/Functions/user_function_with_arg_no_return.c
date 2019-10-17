#include<stdio.h>

void user_function_3(int i_uf)
{
printf("Cienījamais lietotājs, sviecu Tevi no savas lietotāja funkcijas %d, reizi!\n",i_uf);
} 

void user_function_4(int i_uf, double d_uf);

void main()
{
int i_main=0, N=5;
while(i_main<N)
{
 i_main++;
 user_function_3(i_main);
 user_function_4(i_main,(double)i_main/N);
}
}
void user_function_4(int i_uf, double d_uf)
{
printf("Skaitam: %d reize, tātad %.2f dala(s)!\n",i_uf, d_uf);
}
