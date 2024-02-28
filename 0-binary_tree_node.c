#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node in a binary tree
 * @parent: The parent of the node
 * @value: The number to save at the node
 *
 * Return: pointer or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
		return (NULL);

	if (parent == NULL)
		temp->n = value;
	else
	{
		temp->parent = parent;
		temp->n = value;
		temp->left = NULL;
		temp->right = NULL;
	}

	return (temp);
}
