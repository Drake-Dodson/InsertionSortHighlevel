#include "InsertionSort.h"
#include <stdio.h>


int main(void)
{
	const int arraySize = 100;
	int* address;
	int array[100];

	// If confused see this post: https://piazza.com/class/ksklzsp2yup6pv?cid=62
	for (int i = arraySize; i > 0; i--)
	{
		array[arraySize - i] = i;
	}
	address = array;

	printf("%s\r\n", "Un-Sorted");
	for (int i = 0; i < arraySize; i++)
	{
		printf("%d\r\n", address[i]);
	}

	InsertionSort(address, arraySize);

	printf("%s\r\n", "Sorted");
	for (int i = 0; i < arraySize; i++)
	{
		printf("%d\r\n", address[i]);
	}

	return 1;
}
