//2-d array demo
#include<stdio.h>
int main()
{
	int arr[3][2] = {{1,2}, {10,20}, {100,200}};  //2-d array
	int i, j;
	
	printf("2-D array is:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ", arr[i][j]);
		}
	printf("\n");
	}
}
