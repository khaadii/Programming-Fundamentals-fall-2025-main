#include<stdio.h>
int main()
{
	int y=5;
	int z=6;
	int const *ptr=&y;
	printf("\n%p",ptr);
	ptr=&z;
	printf("\n%p",ptr);
}

