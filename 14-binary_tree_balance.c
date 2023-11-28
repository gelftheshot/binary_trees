#include "binary_trees.h"

/**
 *
 *
 */

size_t total_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	left_height = total_height(tree->left);
	right_height = total_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 *
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (total_height(tree) - 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int m;
	m =  (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (m);
}
