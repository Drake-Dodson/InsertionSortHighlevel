#include "InsertionSort.h"
#include <stdio.h>


int main(void)
{
	const int arraySize = 10;
	int* address;
	int array[10];

	// If confused see this post: https://piazza.com/class/ksklzsp2yup6pv?cid=62
	for (int i = arraySize; i > 0; i--)
	{
		array[arraySize - i] = i;
	}
	address = array;


	for (int i = 0; i < arraySize; i++)
	{
		printf("%d\r\n", address[i]);
	}

	InsertionSort(address, arraySize);

	for (int i = 0; i < arraySize; i++)
	{
		printf("%d\r\n", address[i]);
	}

	return 1;
}
