#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: NULL, if error, otherwise, s pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nod;

	new_nod = malloc(sizeof(binary_tree_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = value;
	new_nod->parent = parent;
	new_nod->left = NULL;
	new_nod->right = NULL;

	return (new_nod);
}
