#ifndef __HEAP_H__
#define __HEAP_H__

#include <stdlib.h>

#ifndef T
#define T int
#endif // T

void _heap_siftup(T* heap, int index);
void _swap(T* heap, int d, int s);
void _heap_siftdown(T* heap, int len);

T* heap_alloc(int maxlen)
{
	return malloc(sizeof(T) * (maxlen+1));
}

void heap_free(T* heap)
{
	free(heap);
}

void heap_push(T* heap, int len, const T e)
{
	int i = len+1;
	heap[i] = e;
	_heap_siftup(heap, i);
}

void heap_pop(T* heap, int len, T* ele)
{
	int i = len; 
	
	*ele = heap[1];
	heap[1] = heap[i];
	_heap_siftdown(heap, --len);
}

void _heap_siftup(T* heap, int index)
{
	int p = index / 2;

	while(index != 1)
	{
		if (heap[p] <= heap[index])
			break;
		_swap(heap, p, index);
		index = p;
		p = index / 2;
	}
}

void _heap_siftdown(T* heap, int len)
{
	int i = 1;
	int c = 0;
	while (i <= len)
	{
		c = i * 2;
		if (c > len)
			break;
		if (c+1 <= len &&  heap[c] > heap[c+1])
			++c;
		if (heap[i] <= heap[c])
			break;		
		_swap(heap, i, c);
		i = c;
	}
}

void _swap(T* heap, int d, int s)
{
	T temp = heap[d];
	heap[d] = heap[s];
	heap[s] = temp;
}

#endif // __HEAP_H__
