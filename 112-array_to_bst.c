#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 *
 * Description: This function builds a Binary Search Tree (BST) from an array.
 * The BST is created by inserting the values in the array one by one
 * into the tree.
 * The values are inserted in the order they appear in the array.
 *
 * Return: pointer to the root node of the created BST, or NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *ptr = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		bst_insert(&ptr, array[i]);
	}
	return (ptr);
}
