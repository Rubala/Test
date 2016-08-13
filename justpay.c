#include<conio.h>
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n<0)
{
if(n==0)
printf("%d is zero",n);
else
printf("%d is negative",n);
}
else
printf("%d is positive",n);
return 0;
}
