#include "binary_trees.h"

/**
 *
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;
	
	if (parent == NULL)
		return (NULL);
	ptr = malloc(sizeof(binary_tree_t));
	if (!ptr)
		return (NULL);

	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->n = value;

	if (parent->left == NULL)
	{
		parent->left = ptr;
	}
	else
	{
		ptr->left = parent->left;
		ptr->left->parent = ptr;
		parent->left = ptr;
	}
	return (ptr);

}
