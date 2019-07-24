#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a node
 *@parent: pointer to the parent
 *@value: the value to insert
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_left;

	if (parent == NULL)
		return (NULL);

	node_left = binary_tree_node(parent, value);
	if (node_left == NULL)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = node_left;
		node_left->left = parent->left;
	}
	parent->left = node_left;
	return (node_left);
}
