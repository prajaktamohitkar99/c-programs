#include<stdio.h>
#include<stdio.h>
struct student{
char name[20];
long roll;
float marks;
};
int main()
{
struct student s1;
printf("enter details:\n");
printf("enter name\n");
scanf("%s",s1.name);
printf("enter roll no.\n");
scanf("%ld",&s1.roll);
printf("enter marks\n");
scanf("%f",&s1.marks);
printf("\nentered details are:\n");
printf("name:%s\n"enter details:


***********************************************output**********************************************************************





enter name
prajakta
enter roll no.
610070
enter marks
9.8

entered details are:
name:prajakta
roll no,:610070
marks:9.800000
guest-0lbfwq@it-l1-pc10:~$ 

,s1.name);
printf("roll no,:%ld\n",s1.roll);
printf("marks:%f\n",s1.marks);
}


