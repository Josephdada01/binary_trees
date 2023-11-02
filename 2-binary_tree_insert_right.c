#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that inserts a node as the 
 * right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: return a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = binary_tree_node(parent, value);

	if (n_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		n_node->right = parent->right;
		n_node->right->parent = n_node;
	}
	parent->right = n_node;
	return (n_node);
}
