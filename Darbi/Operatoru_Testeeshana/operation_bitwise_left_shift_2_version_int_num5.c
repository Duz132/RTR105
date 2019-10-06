#include<stdio.h>

void main()
{
int a=10;//atmiņā būs mainīgais a
//Izmērs ir 4 bite - 0000 0000 0000 0000 0000 0000 0000 1010 
printf("Operācija <<: %d<<1 rezultāts %d\n",a,a<<1);

int b;//atmiņā paradīsies mainīgais b (izmērs 1 byte saturs ???? ???? ???? ???? ???? ???? ???? ????)
printf("B mainiga \"sakuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;//šeit ir divas operācijas - =(piešķiršana) un <<(bīdīšana pa bitiem pa kreisi)
printf("Operācija <<: %d<<%d rezultāts %d\n",a,2,b);//sagaidāmais skaitlis 40

int c;
printf("Papētīsim << operāciju\n---------------\n");
printf("cien. lietotajs, lūdzu, ievadi operācijas 1.operantu: ");
scanf("%d",&a);
printf("cien. lietotajs, lūdzu, ievadi operācijas 2.operantu: ");
scanf("%d",&c);
b=a<<c;
printf("-----------------\nSkaties, kas ir sanācis: %d\n",b);
}
