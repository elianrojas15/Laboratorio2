
#include<stdio.h>

void printArray(float array[], int tam)
{	for (int i=0 ; i<tam; i++)
	{	printf ("%f", array[i]);
	}
	printf("\n");
}


void insertionSort (float array[],int tam)
{	for (int step =1; step < tam; step++)
	{float key = array[step];
		int j = step-1;
		while (key < array[j] && j>=0)
		{array [j+1]=array[j];
			--j;
		}
	array[j+1]=key;
	}
}


