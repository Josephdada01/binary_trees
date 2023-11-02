#include "binary_trees.h"
/**
 * binary_tree_is_root - a function that check if a given node is a root
 * @node: a pointer that point to the root node
 * Return: return true or false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	/* if the parent is null, it shows it is the root*/
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
