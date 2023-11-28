#include "binary_trees.h"

/**
 *
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leave;
	size_t right_leave;
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leave = binary_tree_leaves(tree->left);
	right_leave = binary_tree_leaves(tree->right);
	return (left_leave + right_leave);
}
