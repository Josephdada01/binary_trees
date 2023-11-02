#include "binary_trees.h"
/**
 * binary_tree_preorder - a function  that goes through a binary tree
 * using pre-order traversal
 * @tree: the pointer to the root node
 * @func: a pointer function to call each node
 * Return: success
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/* calling the func with value of the current node */
	func(tree->n);

	/*traverising the left subtree in preorder */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
