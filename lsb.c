//.............................lsb...........................
#include<stdio.h>
int main()
{
int b,d;
b=8;
printf("enter data");
scanf("%d",&d);
while(b>=0)
{
printf("%d",(d>>b)&1);
b--;
}
b=0;
if((d>>b)&1)
	printf("\nset\n");
	else
	printf("\nclear\n");
}
