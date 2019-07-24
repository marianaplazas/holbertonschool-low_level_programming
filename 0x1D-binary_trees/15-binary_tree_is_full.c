#include "binary_trees.h"
/**
 *binary_tree_is_full - measures the is_tree factor of a binary tree
 *@tree: pointer to the tree
 *Return: is_full factor
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height_l;
	int height_r;
	int compare;

	if (tree == NULL)
		return (0);
	height_l = tree->left ? 1 + binary_tree_is_full(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_is_full(tree->right) : 0;
	compare = height_l - height_r;
	if (compare == 0)
		return (1);
	else
		return (0);
}
