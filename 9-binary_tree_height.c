#include "binary_trees.h"

/**
 * total_height - helper function to calculate the total
 * height of a binary tree
 * @tree: pointer to the root node of the tree to
 * measure the height
 * Description: This function recursively calculates
 * the total height of a binary tree.
 * It does this by calculating the height of the left
 * and right subtrees and returning
 * the greater of the two, plus one for the current node.
 *
 * Return: total height of the binary tree
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
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Description: This function uses the
 * helper function 'total_height' to calculate
 * the total height of the binary tree,
 * and then subtracts one to get the height
 * as defined by the number of edges in the
 * longest path from root to a leaf.
 *
 * Return: height of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (total_height(tree) - 1);
}
