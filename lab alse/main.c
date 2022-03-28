
#include <stdio.h>
#include "lib1.h"
#include "libreria1.h"

int main()

{

/*variables de entrada*/

	int X, X2 ;
	char car ;
	
printf ("Ingrese el numero de lista de datos que quiere ordenar: "); 
scanf ( "%d", &X);
if (X==1)
	{char *read_file_to_buffer (const char *lista_reales1, unsigned int * );
	void buffertodouble (const  char *lista_reales1, char *car, unsigned int *file_size);
	printf("Ingrese porque metodo quiere ordenar los datos:");
	printf("Ingrese 1 si es por insertionsort ");
	printf("Ingrese 2 si es por bubblesort ");
	scanf("%d", &X2);
		if (X2==1)
		{
			void insertionsort (float *lista_reales1 ,float *tam);
			void write_dArray_to_file (const double *lista_reales1, unsigned int file_size, const char *Documents);
		}
		else
		{	
		void bubble_sort(float *lista_reales1, float *n);
		}
}

else if (X==2)
	{char *read_file_to_buffer (const char *lista_reales2, unsigned int *);
	void buffertodouble (const char *lista_reales2,  char *car, unsigned int *file_size);
	printf("Ingrese porque metodo quiere ordenar los datos: /n");
	printf("Ingrese 1 si es por insertionsort /n");
	printf("Ingrese 2 si es por bubblesort /n");
	scanf("%d", &X2);
		if (X2==1)
		{
		void insertionsort (float *lista_reales2 ,float *tam);
		void printArray(float array[], int tam)
{	for (int i=0 ; i<tam; i++)
	{	printf ("%f", array[i]);
	}
	printf("\n");
}
		}
		else
		{	
		void bubble_sort(float *lista_reales2, float *n);
		}
	}

else if (X==3)
	{char *read_file_to_buffer (const char *lista_reales3, unsigned int *);
	void buffertodouble (const char *lista_reales3, char *car, unsigned int *file_size);
	printf("Ingrese porque metodo quiere ordenar los datos: /n");
	printf("Ingrese 1 si es por insertionsort /n");
	printf("Ingrese 2 si es por bubblesort /n");
	scanf("%d", &X2);
		if (X2==1)
		{
		void insertionsort (float *lista_reales3 ,float *tam);
		}
		else
		{	
		void bubble_sort(float *lista_reales3, float *n);
		}
	}
else if (X==4)
	{char *read_file_to_buffer (const char *lista_reales4, unsigned int *);
	void buffertodouble (const char *lista_reales4, char *car, unsigned int *file_size);
	printf("Ingrese porque metodo quiere ordenar los datos: /n");
	printf("Ingrese 1 si es por insertionsort /n");
	printf("Ingrese 2 si es por bubblesort /n");
	scanf("%d", &X2);
		if (X2==1)
		{
		void insertionsort (float *lista_reales4 ,float *tam);
		}
		else
		{	
		void bubble_sort(float *lista_reales4, float *n);
		}
	}
else if (X==5)
	{char *read_file_to_buffer (const char *lista_reales5, unsigned int *);
	void buffertodouble (const char *lista_reales5, char *car, unsigned int *file_size);
	printf("Ingrese porque metodo quiere ordenar los datos: /n");
	printf("Ingrese 1 si es por insertionsort /n");
	printf("Ingrese 2 si es por bubblesort /n");
	scanf("%d", &X2);
		if (X2==1)
		{
		void insertionSort (float *lista_reales5 ,float *tam);
		}
		else
		{	
		void bubble_sort (float *lista_reales5, float *n);
		}
	}
else if(X==6)
	{char *read_file_to_buffer (const char *lista_reales6, unsigned int *);
	void buffertodouble (const char *lista_reales6, char *car, unsigned int *file_size);
	printf("Ingrese porque metodo quiere ordenar los datos: /n");
	printf("Ingrese 1 si es por insertionsort /n");
	printf("Ingrese 2 si es por bubblesort /n");
	scanf("%d", &X2);
		if (X2==1)
		{
		void insertionsort (float *lista_reales6 ,float *tam);
		}
		else
		{		
		void bubble_sort(float *lista_reales6, float *n);
		}
	}
return 0;
}






