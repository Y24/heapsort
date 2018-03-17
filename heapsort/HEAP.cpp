#include"HEAP.h"
#include<iostream>
template <typename T>
void MAX_HEAPIFY(HEAP<T>& heap, int i)
{
	int left = LEFT(i);
	int right = right(i);
	int largest;
	if (left <= heap.HeapSize&&heap.HeapArray[left] > heap.HeapArray[i])
		largest = left;
	else
		largest = i;
	if (right <= heap.HeapSize&&heap.HeapArray[right] > heap.HeapArray[largest])
		largest = right;
	if (largest != i)
	{
		auto exchange = heap.HeapArray[i];
		heap.HeapArray[i] = heap.HeapArray[largest];
		heap.HeapArray[largest] = exchange;
	}
	MAX_HEAPIFY(heap, largest);
}
template <typename T>
void BUILD_MAX_HEAP(HEAP<T>& heap)
{
	heap.HeapSize = heap.length;
	for (int i = (heap.length+1)\2 - 1; i >= 0; i--)
		MAX_HEAPIFY(heap, i);
	return;
}
template <typename T>
void HEAPSORT(HEAP<T>& heap)
{
	for (int i = heap.length-1; i > 0; i--)
	{
		auto exchange = heap.HeapArray[i];
		heap.HeapArray[i] = heap.HeapArray[0];
		heap.HeapArray[0] = exchange;
	}
	heap.HeapSize--;
	MAX_HEAPIFY(heap, 1);
}