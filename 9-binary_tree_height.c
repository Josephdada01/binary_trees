#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: success or 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t righ_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	righ_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left_height > righ_height ? left_height : righ_height));
}
