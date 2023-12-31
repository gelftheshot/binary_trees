#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Description: This function finds the sibling of a node in a binary tree.
 * A sibling is a node that shares the same parent. If the node is NULL
 * is NULL, or the node has no sibling, the function returns NULL.
 *
 * Return: pointer to the sibling node, or NULL if node is NULL, parent
 * is NULL, or node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
