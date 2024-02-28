#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a left child
 * @parent: Node to insert child in
 * @value: The number to insert as left child
 *
 * Return: Pointer or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
		return (NULL);

	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;

	if (parent->left != NULL)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	}
	parent->left = temp;

	return (temp);
}
