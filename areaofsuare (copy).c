#include<stdio.h>

int main()
{
	int side_of_square,area_of_square;

	printf("\nEnter the side of square:");
	scanf("%d",&side_of_square);
	
	area_of_square=side_of_square*side_of_square;
	printf("\nArea of square:%d",area_of_square);

	return (0);
}
