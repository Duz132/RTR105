#include<stdio.h>

void user_function_1()
{
printf("Cienījamais lietotājs, sviecu Tevi no savas lietotāja funkcijas!\n");
} 
void user_function_2(); //deklarēšana

void main()
{
user_function_1();
user_function_1();
user_function_2();
}

void user_function_2()
{
user_function_1();
} 