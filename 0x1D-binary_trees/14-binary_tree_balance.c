#include "binary_trees.h"

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the tree
 *Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (height_l - height_r);
}
