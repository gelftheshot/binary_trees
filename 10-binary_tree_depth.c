#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Description: This function measures the depth of a node in a binary tree.
 * The depth is measured as the number of edges from the node to the
 * tree's root.
 *
 * Return: depth of the node in the binary tree, or 0 if node is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	while (tree->parent)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
