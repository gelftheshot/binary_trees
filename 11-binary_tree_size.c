#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Description: This function measures the size of a binary tree.
 * The size is measured as the total number of nodes in the tree.
 *
 * Return: size of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_size;
	size_t left_size;

	if (tree == NULL)
		return (0);
	right_size = binary_tree_size(tree->right);
	left_size = binary_tree_size(tree->left);
	return (right_size + left_size + 1);
}
