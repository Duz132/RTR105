#include<stdio.h>

int main()
{
float sk1, sk2, sk3, sk4, sk5, sk6, sk7, sk8, sk9, sk10;
FILE *fptr;
fptr=fopen("float_test.txt","w");

printf("Cien. liet., uzraksti luudzu 10 reaalus skaitlus - "); //PIEMERS: 12.321 45.345 32.34 45.763 64.233 87.76 56.4 34.56 24.567 82.664
scanf("%f%f%f%f%f%f%f%f%f%f", &sk1, &sk2, &sk3, &sk4, &sk5, &sk6, &sk7, &sk8, &sk9, &sk10);
fprintf(fptr,"%f   %f\n",sk1, sk2);
fprintf(fptr,"%f   %f\n",sk3, sk4);
fprintf(fptr,"%f   %f\n",sk5, sk6);
fprintf(fptr,"%f   %f\n",sk7, sk8);
fprintf(fptr,"%f   %f\n",sk9, sk10);

fclose(fptr);

fptr=fopen("float_test.txt","r");

printf("Reaalie skaitli no faila + reizinaashanas rezuiltaats\n");
fscanf(fptr,"%f%f%f%f%f%f%f%f%f%f", &sk1, &sk2, &sk3, &sk4, &sk5, &sk6, &sk7, &sk8, &sk9, &sk10);

printf("%f   %f   %f\n",sk1, sk2, sk1*sk2);
printf("%f   %f   %f\n",sk3, sk4, sk3*sk4);
printf("%f   %f   %f\n",sk5, sk6, sk5*sk6);
printf("%f   %f   %f\n",sk7, sk8, sk7*sk8);
printf("%f   %f   %f\n",sk9, sk10,sk9*sk10);

fclose(fptr);
}

