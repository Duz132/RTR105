#include<stdio.h>

int main()
{
char teikums[50], file[50];
FILE *fptr;

fptr=fopen("test.txt","w");//Open file for write

printf("Cien. liet., uzraksti lūdzu teikumu - ");
scanf("%[^\n]", &teikums);
printf("Tavs teikums ir - %s\n",teikums);

fprintf(fptr,"%s\n",teikums);//Tagad programma uzraksta teikumu failā
fclose(fptr);

fptr=fopen("test.txt","r");//Open file for read

fscanf(fptr,"%[^\n]",file);//Scanē, kas ir failā
printf("FAILA SATURS - %s\n",file);
fclose(fptr);
}
