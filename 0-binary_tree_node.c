#include "binary_trees.h"

/**
 * comment sectoin
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);
	ptr->parent = parent;
	ptr->n = value;
	ptr->right = NULL;
	ptr->left = NULL;
	return (ptr);
}
