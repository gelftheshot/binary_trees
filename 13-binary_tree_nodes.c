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

/**
 *
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
