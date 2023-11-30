#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Description: This function checks if a binary tree is perfect.
 * A binary tree is
 * perfect if all its levels are completely filled.
 * This is checked by comparing the
 * height of the left and right subtrees for every node
 * and making sure they are equal,
 * and also that the left and right subtrees are themselves perfect.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t a;
	size_t b;

	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		a = binary_tree_is_perfect(tree->left);
		b = binary_tree_is_perfect(tree->right);
		return (a && b);
	}
	return (0);
}

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
