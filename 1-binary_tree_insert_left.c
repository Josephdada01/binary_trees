#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node as the
 * left-child of a another node
 * @parent: the pointer to the insert left-child
 * @value: the value to store in the new node
 * Return: a pointer to the created node or Null
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *n_node = binary_tree_node(parent, value);
    if (parent && n_node == NULL)
    {
        return NULL;
    }
    /*assigning the value to the nodes */
    if (parent->left != NULL)
    {
        n_node->left = parent->left;
        n_node->left->parent = n_node;
    }
    parent->left = n_node;
    return (n_node);   
}