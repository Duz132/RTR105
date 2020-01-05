#include<stdio.h>
#include<string.h>

int main()
{
char teikums[50], teikums_copy[50];

printf("Cien. liet., uzraksti lūdzu teikumu - ");
scanf("%[^\n]", &teikums);   //fgets(teikums, sizeof(teikums), stdin);
printf("Tavs teikums ir - %s\n",teikums);
strcpy(teikums_copy, teikums);
printf("Teikuma kopija - %s\n",teikums_copy);
}
