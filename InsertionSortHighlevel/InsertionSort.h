#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_

void ShiftRight(int* adr, int pos, int final);

int FindSortedPos(int* addr, int val, int final);

void InsertSortedPos(int* addr, int pos, int final);

void Fill(int* addr, int length);

void InsertionSort(int* addr, int length);

#endif INSERTIONSORT_H_