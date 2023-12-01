#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to the root node of the BST to search
 * @value: value to search in the BST
 *
 * Description: This function searches for a value in
 * a Binary Search Tree (BST).
 * It starts from the root and goes either left or right depending
 * on the value of the current node,
 * until it finds a node with the same value as the one being searched for.
 *
 * Return: pointer to the node containing a value equals to `value`. If `tree`
 * is NULL or if nothing is found, returns NULL
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	const bst_t *ptr = tree;

	if (tree == NULL)
		return (NULL);
	while (ptr)
	{
		if (ptr->n == value)
			return ((bst_t *)(ptr));
		else if (ptr->n > value)
			ptr = ptr->left;
		else
			ptr = ptr->right;
	}
	return (NULL);
}
