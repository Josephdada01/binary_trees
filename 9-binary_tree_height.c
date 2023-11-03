#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: success or 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t righ_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	righ_height = binary_tree_height(tree->right);

	return ((left_height > righ_height) ? (left_height) : (righ_height) + 1);
}
