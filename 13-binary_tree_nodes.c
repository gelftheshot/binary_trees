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

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Description: This function counts the nodes in
 * a binary tree that have at least
 * one child. It does this by calculating the size
 * of the tree (total number of nodes)
 * and subtracting the number of leaves (nodes with no children).
 *
 * Return: number of nodes with at least one child in the binary
 * tree, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
