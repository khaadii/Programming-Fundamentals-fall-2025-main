#include <stdio.h>
int main (){
	printf ("\tSUDOKU VALIDATOR\n\n");
	printf ("Instructions To Enter The Board:\n1. The board takes input in form of rows.\n2. Enter the entire row with each digit separated by space using spacebar\n3. To start a new row press enter.\n4. BE AWARE! Once you've pressed enter you cannot change the previous input.\n\nENTER THE BOARD BELOW:\n\n");
	int arr[9][9];
	for (int r=0; r<9; r++){
		for(int c=0; c<9; c++){
			scanf ("%d", &arr[r][c]);
			if (arr[r][c]<1 || arr[r][c]>9){
			printf("INVALID INPUT!! SUDOKU RULE VIOLATED!! Number must be between 1-9");
			return 0;
			}
		}
	}
	printf("\nRESULT:\n");
	  // checking rows
	for (int r=0; r<9; r++){
		int check_r[9]={0};
		for (int c=0; c<9; c++){
			int d_r= arr[r][c];
			if (check_r[d_r - 1]==0){
			    check_r[d_r - 1]=1;}
			else{
				printf("THE BOARD IS INVALID!!\nHINT: There's a repetition in row %d",r+1);
				return 0;
				}
			}
		}
		// checking coloumns
	for (int c=0; c<9; c++){
		int check_c[9]={0}; 
		for (int r=0; r<9; r++){
			int d_c = arr[r][c];
			if (check_c[d_c - 1]==0){
			    check_c[d_c - 1]=1;}
			else{
				printf("THE BOARD IS INVALID!!\nHINT: There's a repetition in coloumn %d",c+1);
				return 0;
				}
			}
		}
	//checking sub-grids
	for(int i=0; i<9; i+=3){
		for (int j=0; j<9; j+=3){ //for changing grids
		int check_g[9]={0};
			for(int r=i; r<i+3; r++){
				for (int c=j; c<j+3; c++){
					int d_g=arr[r][c];
					if (check_g[d_g - 1]==0){
						check_g[d_g - 1]=1;}
					else{
						printf("THE BOARD IS INVALID!!\nHINT: ");
						if (i==0)
						{
						if(j==0)
						printf ("There's a repetition in sub-grid 1.");	
						else if(j==3)
						printf ("There's a repetition in sub-grid 2.");
						else
						printf ("There's a repetition in sub-grid 3.");
						}
						else if(i==3)
						{
						if(j==0)
						printf ("There's a repetition in sub-grid 4.");	
						else if(j==3)
						printf ("There's a repetition in sub-grid 5.");
						else
						printf ("There's a repetition in sub-grid 6.");	
						}
						else
						{
						if(j==0)
						printf ("There's a repetition in sub-grid 7.");	
						else if(j==3)
						printf ("There's a repetition in sub-grid 8.");
						else
						printf ("There's a repetition in sub-grid 9.");	
						}
						return 0;
					}
				}
			}
		}
	}

	printf("GOOD JOB!! Your board is VALID.");
	return 0;
}
