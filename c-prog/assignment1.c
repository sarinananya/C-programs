//program by Ananya Sarin dated:25 november 2019
//last modified: 10 december 2019
//program to perform 2-D matrix multiplication passing the two dynamic sized matrices to functions
#include<stdio.h>
#include<stdlib.h>
#include<multiplymatrix.h>
//function prototypes
int input_matrix(int**,int**,int,int,int,int);
int display_matrix(int**,int**,int,int,int,int);
int multiply(int**,int**,int**,int,int,int,int);
int main()
{
	printf("\n\t\t\t\t......WELCOME.......");
	printf("\n\t\t  .......MULTIPLICATION OF TWO MATRICES........");
	int **matA,**matB,**prod_AB;
	int i,j,row_1,column_1,row_2,column_2;
	printf("\n\nenter the number of rows and columns in matrixA:\n\n");
	scanf("%d%d",&row_1,&column_1);

	printf("\nenter the number of rows and columns in matrixB:\n\n");
	scanf("%d%d",&row_2,&column_2);
	//matrix multiplication is only possible if no. of columns of first matrix=no. of rows of second
	if(column_1!=row_2)
		printf("\nERROR!...matrix multiplication is not possible in this case\n");
	else
	{
		matA=(int**)malloc(row_1*sizeof(int*));
		matB=(int**)malloc(row_2*sizeof(int*));
		prod_AB=(int**)malloc(row_1*sizeof(int*));
		//allocate initial memory
		for(i=0;i<row_1;++i){
			matA[i]=(int*)malloc(column_1*sizeof(int));
			//if order of first matrix is row_1*column_1,second matrix is row_2*column_2 then the order of third matrix is row_1*column_2
			prod_AB[i]=(int*)malloc(column_2*sizeof(int));
			}
		for(i=0;i<row_2;++i)
			matB[i]=(int*)malloc(column_2*sizeof(int));
			
		//input the values in matrix
		printf("\nenter values in matrix A and B...\n");
		input_matrix(matA,matB,row_1,column_1,row_2,column_2);
		
		//displaying the matriced
		printf("\nthe two matrice are...\n");
		display_matrix(matA,matB,row_1,column_1,row_2,column_2);	
		
		//multiplying the two matrices
		printf("\nThe PRODUCT of two entered matrices is...\n");
		multiply(matA,matB,prod_AB,row_1,column_1,row_2,column_2);
		
		
	}
return 1;
}
	
	//function definition for asking and reading the matrix
	int input_matrix(int **matA,int **matB,int row_1,int column_1,int row_2,int column_2)
	{
		int i,j;
		//asking and reading the elements of matrixA
		for(i=0;i<row_1;++i)
		{
			for(j=0;j<column_1;++j)
			{
				printf("enter the value at A[%d][%d]:\t",i,j);
				scanf("%d",&matA[i][j]);
			}
		}
		printf("\n\n");
		//asking and reading the elements of matrixB
		for(i=0;i<row_2;++i)
		{
			for(j=0;j<column_2;++j)
			{
				printf("enter the value at B[%d][%d]:\t",i,j);
				scanf("%d",&matB[i][j]);
			}
		}
			
	}
	//function definition for displaying the two matrices
	int display_matrix(int **matA,int **matB,int row_1,int column_1,int row_2,int column_2)
	{
		int i,j;
		printf("\n first matrix \n");
		for(i=0;i<row_1;++i)
		{
			for(j=0;j<column_1;++j)
			{
				printf("\t%d\t",matA[i][j]);
			}
			printf("\n");
		}
		printf("\n second matrix \n");
		for(i=0;i<row_2;++i)
		{
			for(j=0;j<column_2;++j)
			{
				printf("\t%d\t",matB[i][j]);
			}
			printf("\n");
		}
	}

			
