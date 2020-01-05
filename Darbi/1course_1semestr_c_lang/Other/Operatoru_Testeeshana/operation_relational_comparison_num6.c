#include<stdio.h>

void main()
 {
int a=10;//atmiņā būs mainīgais a (1 byte 00001010)
int b=2, c,d,e,f;
c=a<b;
d=a>b;
e=a<=b;
f=a>=b; 
printf("Operācija < %d<%d rezultāts %d\n",a,b,c);
printf("Operācija > %d>%d rezultāts %d\n",a,b,d);
printf("Operācija <= %d<=%d rezultāts %d\n",a,b,e);
printf("Operācija >= %d>=%d rezultāts %d\n",a,b,f);





//char b;//atmiņā paradīsies mainīgais b
//printf("B mainiga \"sakuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

//b=a<<2;//šeit ir divas operācijas - =(piešķiršana) un <<(bīdīšana pa bitiem pa kreisi)
//printf("Operācija <<: %d<<1 rezultāts %d\n",a,2,b);//sagaidāmais skaitlis 40

//char c;
//printf("Papētīsim << operāciju\n---------------\n");
//printf("cien. lietotajs, lūdzu, ievadi operācijas 1.operantu: ");
//scanf("%d",&a);
//printf("cien. lietotajs, lūdzu, ievadi operācijas 2.operantu: ");
//scanf("%d",&c);
//b=a<<c;
//printf("-----------------\nSkaties, kas ir sanācis: %d\n",b);
 }
