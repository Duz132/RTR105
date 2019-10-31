#include<stdio.h>

int srand(1...)
int main()
{
int i;
for(i=1;i<20;i++)
{
	printf("%d Random - %d\n",i,rand(20));
}
}
