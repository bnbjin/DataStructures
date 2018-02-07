#include <assert.h>
#include <stdio.h>
#include <string.h>

#define HASH_TABLE_SIZE 32 /*10240*/
#define NIL 0

int hashfnaux(int k)
{
	// using div hashing func
	return k % HASH_TABLE_SIZE;
}

int hashfn(int *hashtab, int k)
{
	int res = 0;

	for (int i = 0; i < HASH_TABLE_SIZE; i++)
	{
		res = (hashfnaux(k) + i) % HASH_TABLE_SIZE;

		if (NIL == hashtab[res])
			return res;
	}

	return -1;
}

int insert(int *hashtab, int k)
{
	int res = 0;
	
	res = hashfn(hashtab, k);
	if (-1 != res)
	{
		hashtab[res] = k;
		return 0;
	}

	return -1;
}

int datas[] = { 1, 2, 3, 33, 34, 35 };

int main()
{
	int hashtab[HASH_TABLE_SIZE];
	memset(hashtab, NIL, sizeof(hashtab));

	for (int i = 0; i < HASH_TABLE_SIZE; ++i)
	{
		printf("%d ", hashtab[i]);
	}
	printf("\n");

	printf("***************\n");

	for (int i = 0; i < sizeof(datas)/sizeof(datas[0]); ++i)
	{
		insert(hashtab, datas[i]);
	}

	for (int i = 0; i < HASH_TABLE_SIZE; ++i)
	{
		printf("%d ", hashtab[i]);
	}
	printf("\n");

	return 0;
}
