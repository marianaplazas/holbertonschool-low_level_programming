#include "binary_trees.h"
#include "10-binary_tree_depth.c"
/**
 * binary_trees_ancestor - find the lowest common ancestor
 * @first: first node
 * @second: second node
 * Return: the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t first_d;
	size_t second_d;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == NULL)
		return ((binary_tree_t *) first);
	if (second->parent == NULL)
		return ((binary_tree_t *) second);
	first_d = binary_tree_depth(first);
	second_d = binary_tree_depth(second);
	while (first_d != second_d)
	{
		if (first_d > second_d)
		{
			first_d--;
			first = first->parent;
		}
		else
		{
			second_d--;
			second = second->parent;
		}
	}
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *) first);
}
