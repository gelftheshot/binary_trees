#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Description: This function counts the leaves in a binary tree.
 * A leaf is a node with no children.
 *
 * Return: number of leaves in the binary tree, or 0 if tree is NULL
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
