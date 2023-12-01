#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to insert in the BST
 *
 * Description: This function inserts a value in a Binary Search Tree (BST).
 * The value is inserted following the Binary Search Tree property.
 * This property states that the value of all nodes in the left subtree
 * is less than the root,
 * and the value of all nodes in the right subtree is greater than the root.
 *
 * Return: pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
			return ((*tree)->left = binary_tree_node(*tree, value));
		else
			return (bst_insert(&((*tree)->left), value));
	}
	else if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
			return ((*tree)->right = binary_tree_node(*tree, value));
		else
			return (bst_insert(&((*tree)->right), value));
	}

	return (NULL);
}
