#include "hash_tables.h"


/**
 * key_index - calculate index for a given key.
 * @key: key
 * @size: size of the array.
 *
 * Return: key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
