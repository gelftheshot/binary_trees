#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Description: This function checks if a binary tree is full.
 * A binary tree is
 * full if every node has either 0 or 2 children. In other words,
 * each node in the
 * tree must have either no children or two children.
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && (binary_tree_is_full(tree->right)));
	}
	return (0);
}
