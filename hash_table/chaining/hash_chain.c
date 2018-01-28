#include "hash_table_chain.h"
#include <math.h>
#include <assert.h>

/*
* @desc		h(k) = key mod m; m is the count of the slots
*/
int hash_func_div(int key)
{
	/* 
	the hash table size should be a prime
	that not close to an integer power of 2
	*/

	return key % HASH_TABLE_SIZE;
}
 
/*
* @desc		h(k) = lower_intenger(kA mod 1); A is a special float number
*/
int hash_func_mult(int key)
{
	/*
	the hash table size is not critical
	but normally it is an integer of the power of 2
	*/

	double A = (sqrt(5.0) - 1) / 2;

	return int(HASH_TABLE_SIZE * (A * k % 1))	
}
