#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d%d,&a,&b,&c");
if(a>b)
{
if(a>c)
{
printf("a is the biggest");
}
else
{
printf("c is the biggest");
}
}
elseif(b>c)
printf("b is the biggest");
else
printf("c is the biggest");
}
