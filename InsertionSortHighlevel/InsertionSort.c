#include "InsertionSort.h"

void ShiftRight(int* addr, int pos, int fin)
{
	for (int i = fin - 1; i >= pos; i--)
	{
		addr[i + 1] = addr[i];
	}
}

int FindSortedPos(int* addr, int val, int fin)
{
	int i; 
	for (i = 0; i <= fin; i++)
	{
		if (addr[i] >= val)
			break;
	}
	return i;
}

void InsertSortedPos(int* addr, int pos, int fin)
{
	int v = addr[pos];
	int p = FindSortedPos(addr, v, fin);
	ShiftRight(addr, p, pos);
	addr[p] = v;
}

void InsertionSort(int* addr, int length)
{
	for (int i = 1; i <= length - 1; i++)
	{
		InsertSortedPos(addr, i, length - 1);
	}
}

void Fill(int** addr, int length)
{
	// Doesn't work IDK
	addr = malloc(length * sizeof(int));
	for (int i = length; i > 0; i--)
	{
		addr[length - i] = i;
	}
}
