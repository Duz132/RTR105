#include<stdio.h>

int user_function_1(int i_uf)
{
i_uf++;
printf("Cienījamais lietotājs, gribu teikt Tev 'Hello!' %d reizi!\n",i_uf);
return i_uf;
} 

void main()
{
int i_main=0, check=10;
while(i_main<check)
 i_main=user_function_1(i_main);
printf("Goodbye!\n");
}
