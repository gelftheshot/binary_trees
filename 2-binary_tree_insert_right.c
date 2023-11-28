#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description: This function creates a new node and inserts it as the right
 * child of the given parent node. If the parent already has a right child, the
 * new node takes its place, and the old right child is set as the right child
 * of the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		parent->right = ptr;
	}
	else
	{
		ptr->right = parent->right;
		ptr->right->parent = ptr;
		parent->right = ptr;
	}
	return (ptr);

}
