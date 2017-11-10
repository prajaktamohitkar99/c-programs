#include<stdio.h>
void main()
{
int n,fact=1;
int a,i=1;
printf("enter value of n");
scanf("%d",&n);
while(i<=n)
{
fact=fact*i;i++;
}
printf("%d",fact);
a=n*n;
printf("sqare of the number=%d",a);
}
