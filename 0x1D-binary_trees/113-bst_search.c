#include "binary_trees.h"
/**
 * bst_search - Search for a value in a Binary Search Tree
 * @tree: pointer to the tree
 * @value: the value to look
 * Return: the value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
