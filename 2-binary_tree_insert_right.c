#include "binary_trees.h"

/**
 *
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		parent->right = ptr;
	}
	else
	{
		ptr->right = parent->right;
		ptr->right->parent = ptr;
		parent->right = ptr;
	}
	return (ptr);

}
