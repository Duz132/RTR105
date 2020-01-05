#include<stdio.h>

void main()
{
	int i=0,N,fact=1,fact_old=1;

	printf("Cien. liet., kāda cipara faktoriālu jūs gribat atrast?\n");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		fact_old=fact;
		fact=fact*i;
		if (fact/i == fact_old)
		printf("Skaitļa %d faktoriāls ir: %d\n",i,fact);
		else {printf("Diemžēl ir sasniegta datu tipa robeža!\n");}
	}
}
