#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

void main(){

int k, p;
char x[30], y[30], z[30], atb[2];
FILE *file;
file=fopen("abc.txt","w");
//srand(time(NULL));

printf("Gadījuma skaitļu ģenerators. Eksāmena biļete nr.44\n");
//printf("Cien., liet.,lūdzu ievadi gadījumu skaitļu ģenerācijas pazīmi - ");
//scanf("%d",&p);
//srand(p);
fprintf(file,"|Gr. Nr.|xk\t|yk\t|zk\t|xk+yk>zk\t|xk+zk>yk\t|yk+zk>xk|\n");
fprintf(file,"|-------|-------|-------|-------|---------------|---------------|--------|\n");
x[0]=0;
for(k=0; k<30; k++){
x[k] = rand() % 11;
y[k] = rand() % 11;
z[k] = rand() % 11;

if(x[k]+y[k]>z[k]) {atb[0]='Y';}//{fprintf(file," %d grupai xk un yk summa ir lielāka par zk! (%d+%d>%d)(Y)\n",k+1,x[k],y[k],z[k]);}
else {atb[0]='N';}//{fprintf(file," %d grupai xk un yk summa NAV lielāka par zk! (%d+%d<%d)(N)\n",k+1,x[k],y[k],z[k]);}

if(x[k]+z[k]>y[k]){atb[1]='Y';}//{fprintf(file," %d grupai xk un zk summa ir lielāka par yk! (%d+%d>%d)(Y)\n",k+1,x[k],z[k],y[k]);}
else {atb[1]='N';}// {fprintf(file," %d grupai xk un zk summa NAV lielāka par yk! (%d+%d<%d)(N)\n",k+1,x[k],z[k],y[k]);}

if(y[k]+z[k]>x[k]) {atb[2]='Y';}//{fprintf(file," %d grupai yk un zk summa ir lielāka par xk! (%d+%d>%d)(Y)\n",k+1,y[k],z[k],x[k]);}
else {atb[2]='N';}//{fprintf(file," %d grupai yk un zk summa NAV lielāka par xk! (%d+%d<%d)(N)\n",k+1,y[k],z[k],x[k]);}

fprintf(file,"|%d\t|%d\t|%d\t|%d\t|%c\t\t|%c\t\t|%c\t |\n",k+1,x[k],y[k],z[k],atb[0],atb[1],atb[2]);
fprintf(file,"|-------|-------|-------|-------|---------------|---------------|--------|\n");
// fprintf(file," %d grupas ANALĪZE\n",k+1);
}
printf("TEST x char - ");
for(k=0; k<30; k++) {printf("%d ",x[k]);}
fclose(file);
}
