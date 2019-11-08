#include<stdio.h>
#include<string.h>

int main()
{
//float sk1, sk2, sk3, sk4, sk5, sk6, sk7, sk8, sk9, sk10;
char test[100];
//FILE *fptr;
int i;
//fptr=fopen("float_test.txt","w");

printf("Cien. liet., uzraksti luudzu 10 reaalus skaitlus - ");
//scanf("%f %f %f %f %f %f %f %f %f %f", &sk1, &sk2, &sk3, &sk4, &sk5, &sk6, &sk7, &sk8, &sk9, &sk10);
scanf("%[^\n]",&test);
printf("TEST");
for(i=0;i<strlen(test);i++)
{
 printf("%s\n",test);
}

//fprintf(fptr,"%f   %f\n",sk1, sk2);
//fprintf(fptr,"%f   %f\n",sk3, sk4);
//fprintf(fptr,"%f   %f\n",sk5, sk6);
//fprintf(fptr,"%f   %f\n",sk7, sk8);
//fprintf(fptr,"%f   %f\n",sk9, sk10);
//fclose(fptr);

//fptr=fopen("float_test.txt","r");

//printf("FAILA SATURS\n");
//while(fscanf(fptr,"%f%f%f%f%f%f%f%f%f%f", &sk1, &sk2, &sk3, &sk4, &sk5, &sk6, &sk7, &sk8, &sk9, &sk10) != EOF)
//{
//	printf("%f   %f   %f\n",sk1, sk2, sk1*sk2);
//	printf("%f   %f   %f\n",sk3, sk4, sk3*sk4);
//	printf("%f   %f   %f\n",sk5, sk6, sk5*sk6);
//	printf("%f   %f   %f\n",sk7, sk8, sk7*sk8);
//	printf("%f   %f   %f\n",sk9, sk10,sk9*sk10);
//}
//fclose(fptr);
}

