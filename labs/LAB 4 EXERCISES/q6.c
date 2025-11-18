#include<stdio.h>
int main()
{
	float no_of_calories,fat_grams, calories_from_fat,percentage_of_calories_from_fat;
	printf("\nEnter the no. of calories:  ");
	scanf("%f",&no_of_calories);
	if(no_of_calories<=0)
		printf("\nnot possible!");
	else{
		printf("\nEnter the fat grams:  ");
		scanf("%f",&fat_grams);
		if(fat_grams<0)
			printf("\nnot possible");
		else
		{
			calories_from_fat=fat_grams*9;
			if(calories_from_fat>no_of_calories)
				printf("\nEither the calories or fat grams were incorrectly entered!");
			else{
				percentage_of_calories_from_fat=(calories_from_fat/no_of_calories)*100;
				printf("\nThe persentage of calories from fat in is:  %.2f %%",percentage_of_calories_from_fat);
				if(percentage_of_calories_from_fat<30)
					printf("\nThe food is low in fat!");
			}
	
		}
	}
	
	return 0;	
}
