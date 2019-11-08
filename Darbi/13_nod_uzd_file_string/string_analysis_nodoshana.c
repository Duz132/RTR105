#include<stdio.h>
#include<string.h>

int main()
{
char teikums[50];
int i, vardu_count=0, teikuma_sakums=0, teikuma_beigas=0;
int burtu_count=0, vardu_liel=0;

printf("Cien. liet., uzraksti lūdzu teikumu - ");
scanf("%[^\n]",&teikums);
printf("Tavs teikums ir - %s\n",teikums);

for (i=0; i<strlen(teikums); i++)
{
//VARDU COUNT BLOCK START
	if (teikums[i] != ' ' && teikuma_sakums == 0)// lai nebuutu atstarpes pirms teikuma saakuma
		teikuma_sakums++;
	if (teikuma_sakums == 1 && teikuma_beigas == 0  && teikums[i] == ' ' && teikums[i+1] != ' ')//ja teikums ir saacies un liidz taa beigaam
		vardu_count++;
	if (teikums[i+1] == '\0')
		teikuma_beigas++;
	if (teikums[i+1] == '\0' && teikums[i] == ' ')
		vardu_count--;
//VARDU COUNT BLOCK END
//VARDU LIEL PAR 5  BLOCK START
	if (teikums[i] != ' ' && teikums[i+1] != '\0')
	{
		burtu_count++;
		//printf("burtu count tagad - %d\n",burtu_count); //TESTESHANA
	}
	else
	{
		if (teikums[i] != ' ' && teikums[i+1] == '\0')
			burtu_count++;
			//printf("burtu count tagad (pec if-a, kur next ir end) - %d\n",burtu_count); //TESTESHANA
		if (burtu_count>5)
		{
			vardu_liel++;
			burtu_count=0;
		}
		else
			burtu_count=0;
	}
	//printf("Burtu count tagad (pec if-a) - %d\n",burtu_count); //TESTESHANA
}
//VARDU LIEL PAR 5 BLOCK END  //PIEMEERS:' ',' ',' 'Hello' ',' 'my' ',' 'dear' ',' 'friend' ',' ',' ' // atstarpe - ' '
printf("Tavā teikumā ir %d vārdu\n",vardu_count+1);
printf("Tavā teikumā ir %d vārdu, kuriem burtu skaits ir lielāks par 5\n",vardu_liel);
}
