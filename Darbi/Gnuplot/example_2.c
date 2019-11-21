#include<stdio.h>
#include<math.h>

int main()
{
char dati[20];
int kolvo, yes_no,i=1;
FILE *fptr;

printf("Cien. liet., lūdzu, ievadi datus grafiku zīmēšanai!\n");
printf("Izmanto tādus apzīmējumus - x, atstarpe, y!\n");
printf("Pirmkārt, cik x un y datus Tu gribi ievādīt? - ");
scanf("%d",&kolvo);
while(i<=kolvo)
{
	printf("Ievadi %d x un %d y !\n",i,i);
	scanf("%[^\n]",&dati);
	i++;
}
printf("PĀRBAUDE - %s\n",dati);

fptr=fopen("data.dat","w");
fprintf(fptr,"%s\n",dati);
fclose(fptr);
}
