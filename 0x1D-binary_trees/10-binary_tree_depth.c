#include "binary_trees.h"

/**
 *binary_tree_depth - measures the depth of a binary tree
 *@tree: pointer to the tree
 *Return: the depth 
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_p;

	depth_p = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth_p);
}
