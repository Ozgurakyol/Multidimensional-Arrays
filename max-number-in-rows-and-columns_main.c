#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void maximum(int arr[5][5],int row, int column); // maximum function prototype
void print(int arr[5][5], int row, int column);  // printf fucntion prototype





int main(int argc, char *argv[])
{
	int array[5][5] = {{6,5,9,8,7},{4,3,2,1,8},{7,4,3,5,1},{1,3,6,4,5},{3,1,2,5,0}}; // All rows and columns
	print(array,5,5);
	printf("\n\n\n");
	maximum(array,5,5);

	return 0;
}




void print(int arr[5][5],int row,int column){         // We created the function to see the array (print function)
	
	int i,j;
	for (i=0;i<row;i++){
		for (j=0;j<column;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
}



// 00  01  02  03  04 
// 10  11  12  13  14
// 20  21  22  23  24
// 30  31  32  33  34
// 40  41  42  43  44         (matrix indices)   
																		   
																		   
	void maximum(int arr[5][5], int row, int column){
	int x=0,y=0;
	int i,j,max=arr[x][y];																	   	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			if (max <= arr[i][j]){
				max = arr[i][j];
			}
	
	}	
	
	printf("the biggest number in row %d : %d\n",i+1,max); // biggest number in rows
	max = arr[x+1][y];
	
	}
	
	for (j=0;j<5;j++){
		for (i=0;i<5;i++){
			if (max <= arr[i][j]){
				max = arr[i][j];
			}
	}	
		
	printf("the biggest number in column %d : %d\n",j+1,max); // biggest numbers in column
	max = arr[x][y+1];
	
	}

}









