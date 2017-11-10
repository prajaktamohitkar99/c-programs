#include<stdio.h>
void main()
{
int ch,a,b,c;
   printf("\n Enter two numers");
   scanf("%d%d",&a,&b);
   printf("\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division\n\t5.Mod");
   printf("\nEnter choice:");
   scanf("%d",&ch);
switch(ch)
{
case 1:
 	 c=a+b;
  	break;
case 2:
 	 c=a-b;
 	 break;
case 3:
 	 c=a*b;
 	 break;
case 4:
 	 c=a/b;
 	 break;
case 5:
 	 c=a%b;
 	 break;
default:
 	 printf("\n\tINVALID INPUT");
 	 break;
}
printf("\n\t RESULT IS %d",c);
}
