
#include <stdio.h>

void printArray(int array[],int n)
{
	for(int i = 0;i < n; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}


void bubble_sort(int s[], int n)
{
	void swap(int *x,int*y)
	{
	int tmp = *x;
	*x = *y ;
	*y = tmp;
	}
	for(int x=0; x < n-1; x++ )
	{
		for(int ia=0; ia<n-1 ; ia++)
		{
			int is = ia + 1;
			if(s[ia]>s[is])
			{
				swap(&s[ia],&s[is]);
			}
		}
	}
}


