#include "binary_trees.h"

/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * @depth: depth of the tree
 * @level: level of the tree
 *
 * Description: This function checks if a binary tree is perfect.
 * A binary tree is
 * perfect if all interior nodes have two children and all leaves
 * have the same depth
 * or same level.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 1
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (depth == level);
	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
 * depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 *
 * Description: This function measures the depth of a binary tree.
 * The depth is measured as the number of edges in the longest
 * path from root to a leaf.
 *
 * Return: depth of the binary tree, or 0 if tree is NULL
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Description: This function checks if a binary tree is perfect.
 * A binary tree is perfect if all its levels are completely filled.
 * This is checked by comparing the height of the left and right
 * subtrees for every node
 * and making sure they are equal, and also that the left and right
 * subtrees are themselves perfect.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (!tree)
		return (0);
	d = depth(tree);
	return (is_perfect(tree, d, 0));
}
