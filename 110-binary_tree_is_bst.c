#include "binary_trees.h"


int max(binary_tree_t *tree);
int is_bst(const binary_tree_t *tree);
int min(binary_tree_t *tree);

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 *
 * Description: This function checks if a binary tree is a valid
 * Binary Search Tree (BST).
 * A valid BST is defined as follows:
 * - The left subtree of a node contains only nodes with keys less
 * than the node's key.
 * - The right subtree of a node contains only nodes with keys greater
 * than the node's key.
 * - Both the left and right subtrees must also be binary search trees.
 *
 * Return: 1 if the tree is a valid BST, and 0 otherwise.
 * If tree is NULL, return 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst(tree));
}

/**
 * is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 *
 * Description: This function checks if a binary tree is a valid
 * Binary Search Tree (BST).
 * A valid BST is defined as follows:
 * - The left subtree of a node contains only nodes with keys less
 * than the node's key.
 * - The right subtree of a node contains only nodes with keys greater
 * than the node's key.
 * - Both the left and right subtrees must also be binary search trees.
 *
 * Return: 1 if the tree is a valid BST, and 0 otherwise.
 * If tree is NULL, return 1
 */


int is_bst(const binary_tree_t *tree)
{
	int right_min;
	int left_max;

	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	right_min = min(tree->right);
	left_max = max(tree->left);
	return ((tree->n > left_max) && (tree->n < right_min) &&
			(is_bst(tree->left)) && (is_bst(tree->right)));
}

/**
 * max - finds the maximum value in a binary tree
 * @tree: pointer to the root node of the tree to find the maximum in
 *
 * Description: This function finds the maximum value in a binary tree.
 * The maximum value is the largest value found in the tree.
 *
 * Return: the maximum value found in the tree. If tree is NULL, return INT_MIN
 */
int max(binary_tree_t *tree)
{
	int left_max;
	int right_max;
	int temp;

	if (tree == NULL)
		return (-2147483648);
	left_max = max(tree->left);
	right_max = max(tree->right);
	temp = tree->n;
	if (left_max > temp)
		temp = left_max;
	if (right_max > temp)
		temp = right_max;
	return (temp);
}

/**
 * min - finds the minimum value in a binary tree
 * @tree: pointer to the root node of the tree to find the minimum in
 *
 * Description: This function finds the minimum value in a binary tree.
 * The minimum value is the smallest value found in the tree.
 *
 * Return: the minimum value found in the tree. If tree is NULL,
 * return INT_MAX
 */
int min(binary_tree_t *tree)
{
	int left_min;
	int right_min;
	int temp;

	if (tree == NULL)
		return (2147483647);
	left_min = min(tree->left);
	right_min = min(tree->right);
	temp = tree->n;
	if (left_min < temp)
		temp = left_min;
	if (right_min < temp)
		temp = right_min;
	return (temp);

}
