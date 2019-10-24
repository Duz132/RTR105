#include<stdio.h>

void main()
{
int a,b,c,atb,max,mid,min;
printf("Cien. liet., lūdzu, ievadi 3 ciparus\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf("Kādā secībā jūs gribat kārtot skaitļus?\n");
printf("1 - augošā, 2 - dilstošā\n");
printf("3 - augošā pēc moduļa, 4 - dilstošā pēc moduļa\n");
scanf("%d",&atb);
if (atb==1)
{
	if (a>b && a>c)
	{
		max=a;
		if (b>c) {mid=b; min=c;}
		else {mid=c; min=b;}
		printf("Sak sk - %d, %d, %d\n",max,mid,min);
	}
	if (b>a && b>c)
	{
		max=b;
		if (a>c) {mid=a; min=c;}
		else {mid=c; min=a;}
		printf("Sak sk - %d, %d, %d\n",max,mid,min);
	}
	if (c>a && c>b)
	{
		max=c;
		if (a>b) {mid=a; min=b;}
		else {mid=b; min=a;}
		printf("Sak sk - %d, %d, %d\n",max,mid,min);
	}
}

if (atb==2)
{
	if (a>b && a>c)
	{
		max=a;
		if (b>c) {mid=b; min=c;}
		else {mid=c; min=b;}
		printf("Sak sk - %d, %d, %d\n",min,mid,max);
	}
	if (b>a && b>c)
	{
		max=b;
		if (a>c) {mid=a; min=c;}
		else {mid=c; min=a;}
		printf("Sak sk - %d, %d, %d\n",min,mid,max);
	}
	if (c>a && c>b)
	{
		max=c;
		if (a>b) {mid=a; min=b;}
		else {mid=b; min=a;}
		printf("Sak sk - %d, %d, %d\n",min,mid,max);
	}
}
}

