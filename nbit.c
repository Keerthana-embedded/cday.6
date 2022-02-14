//.............................get nth bit...........................
#include<stdio.h>
int main()
{
int b,d,n;
b=8;
printf("enter data");
scanf("%d",&d);
printf("enter to check nth bit");
scanf("%d",&n);
while(b>=0)
{
printf("%d",(d>>b)&1);
b--;
}
if((d>>n)&1)
	printf("\nset\n");
	else
	printf("\nclear\n");
}
