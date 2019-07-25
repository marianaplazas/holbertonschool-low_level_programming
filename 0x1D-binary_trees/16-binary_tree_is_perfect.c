#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "9-binary_tree_height.c"
/**
 *binary_tree_is_perfect - checks if tree is perfect
 *@tree: pointer to the tree
 *Return: the height
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_is_perfect(tree->left) &&
			 binary_tree_is_perfect(tree->right) &&
			(binary_tree_height(tree->left) == binary_tree_height(tree->right)));
}
