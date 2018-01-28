#ifndef __HASH_CHAIN_H__
#define __HASH_CHAIN_H__

/*
Resolving collision by chaining
*/

#define HASH_TABLE_SIZE 997
#define NIL 0

typedef struct _satellite_data
{
	int key;
	void* data;
}satellite_data;

typedef struct _node
{
	satellite_data* sd;
	node* next;
}node;

typedef struct _hash_table_chain_slot
{
	node *head;
}hash_table_chain_slot;

typedef struct _hash_table_chain
{
	hash_table_chain_slot table[HASH_TABLE_SIZE];
}hash_table_chain;

/*
* @desc		init an empty hash table
* @param	size[in] a reference to generate an apropriate size
* @ret		
*/
hash_table_chain* hash_table_init(int size)

/*
* @desc		h(k) = key mod m; m is the count of the slots
*/
int hash_func_div(int key);

#endif // __HASH_CHAIN_H__ 
