#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Description: This function creates a new node and inserts it as the left
 * child of the given parent node. If the parent already has a left child, the
 * new node takes its place, and the old left child is set as the left child
 * of the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;
	
	if (parent == NULL)
		return (NULL);
	ptr = malloc(sizeof(binary_tree_t));
	if (!ptr)
		return (NULL);

	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->n = value;

	if (parent->left == NULL)
	{
		parent->left = ptr;
	}
	else
	{
		ptr->left = parent->left;
		ptr->left->parent = ptr;
		parent->left = ptr;
	}
	return (ptr);

}
