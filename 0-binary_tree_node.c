#include "binary_trees.h"
/**
 * binary_tree_node -  a function that creates a binary tree node
 * @parent: pointer to the parent node
 * @value: is the value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    /*creatuing a new node*/
    binary_tree_t *n_node;

    /*allocating memory for the new node*/
    n_node = malloc(sizeof(binary_tree_t));

    /*if new node is null return null*/
    if (n_node == NULL)
    {
        return NULL;
    }
    /*initializing the attributes*/
    n_node->n = value;
    n_node->parent = parent;
    n_node->left = NULL;
    n_node->right = NULL;

    reSturn (n_node);
}