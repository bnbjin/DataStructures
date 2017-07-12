#include "heap.h"

int main()
{
	int * heap = heap_alloc(10);
	int len = 0;
	int res = 0;

	heap_push(heap, len++, 10);
	heap_push(heap, len++, 9);
	heap_push(heap, len++, 8);
	heap_pop(heap, len--, &res);

	heap_free(heap);

	return 0;
}
