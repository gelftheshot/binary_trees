#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Description: This function creates a new binary tree node and initializes
 * its elements. The parent of the new node is set to the given parent, and
 * the value of the new node is set to the given value. The left and right
 * children of the new node are initialized to NULL.
 *
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);
	ptr->parent = parent;
	ptr->n = value;
	ptr->right = NULL;
	ptr->left = NULL;
	return (ptr);
}
