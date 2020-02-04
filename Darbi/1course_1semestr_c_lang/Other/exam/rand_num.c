#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

void main(){

int k, p;
char x[30], y[30], z[30], atb[3];
FILE *file;
file=fopen("abc.txt","w");
//srand(time(NULL));

printf("Gadījuma skaitļu ģenerators. Eksāmena biļete nr.44\n");
printf("Cien., liet.,lūdzu ievadi gadījumu skaitļu ģenerācijas pazīmi - ");
scanf("%d",&p);
srand(p);
fprintf(file,"|Gr. Nr.|xk\t|yk\t|zk\t|xk+yk>zk\t|xk+zk>yk\t|yk+zk>xk|\n");
fprintf(file,"|-------|-------|-------|-------|---------------|---------------|--------|\n");
for(k=0; k<30; k++){
x[k] = rand() % 11;
y[k] = rand() % 11;
z[k] = rand() % 11;

if(x[k]+y[k]>z[k]) {atb[0]='Y';}
else {atb[0]='N';}

if(x[k]+z[k]>y[k]) {atb[1]='Y';}
else {atb[1]='N';}

if(y[k]+z[k]>x[k]) {atb[2]='Y';}
else {atb[2]='N';}

fprintf(file,"|%d\t|%d\t|%d\t|%d\t|%c\t\t|%c\t\t|%c\t |\n",k+1,x[k],y[k],z[k],atb[0],atb[1],atb[2]);
fprintf(file,"|-------|-------|-------|-------|---------------|---------------|--------|\n");
}
fclose(file);
}
