//........................clear nth bit..........................
#include<stdio.h>
int main()
{
int b,d,pos;
b=8;
printf("enter data");
scanf("%d",&d);
printf("enter nth bit to clear");
scanf("%d",&pos);
while(b>=0)
{
printf("%d",(d>>b)&1);
b--;
}
printf("\n");
d&=~(1<<pos);
b=8;
while(b>=0)
{
printf("%d",(d>>b)&1);
b--;
}
}
