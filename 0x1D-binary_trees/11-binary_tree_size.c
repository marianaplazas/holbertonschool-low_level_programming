#include "binary_trees.h"

/**
 *binary_tree_size - return the size
 *@tree: pointer to the tree
 * Return: 0 or the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree == NULL ? 0 : binary_tree_size(tree->left) +
		1 + binary_tree_size(tree->right));
}
