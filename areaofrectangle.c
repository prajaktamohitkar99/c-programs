#include<stdio.h>

int main()
{
	int length_of_rectangle,breadth_of_rectangle,area_of_rectangle;

	printf("\nEnter the Length of rectangle:");
	scanf("%5d",&length_of_rectangle);

	printf("\nEnter the Breadth of Rectangle:");
	scanf("%4d",&breadth_of_rectangle);

	area_of_rectangle=length_of_rectangle*breadth_of_rectangle;
	printf("\nArea of rectangle:%3d",area_of_rectangle);

	return(0);
}
