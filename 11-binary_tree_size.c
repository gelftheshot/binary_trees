#include "binary_trees.h"

/**
 *
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_size;
	size_t left_size;

	if (tree == NULL)
		return (0);
	right_size = binary_tree_size(tree->right);
	left_size = binary_tree_size(tree->left);
	return(right_size + left_size + 1);
}
