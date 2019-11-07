#include<stdio.h>
#include<string.h>

int main()
{
char teikums[50];
int i, v, teikuma_length, vardu_count, burtu_count, vardu_liel_5;

printf("Cien. liet., uzraksti lūdzu teikumu - ");
scanf("%[^\n]",&teikums);
printf("Tavs teikums ir - %s\n",teikums);
teikuma_length=strlen(teikums);

for (i=0; i<strlen(teikums); i++)
{
	if (teikums[i] == ' ')
		vardu_count++;
	//else
	//{
	//	for (v=i;teikums[v] == ' ';v++)
	//		{
	//		if (teikums[v] != ' ')
	//			burtu_count++;
	//		}
	//		if (burtu_count>5)
	//			vardu_liel_5++;
	//		}
	//}
}
printf("Tavā teikumā ir %d vārdu\n",vardu_count+1);
//printf("Tavā teikumā ir %d vārdu, kuriem burtu skaits ir lielāks par 5\n",vardu_liel_5);
}
