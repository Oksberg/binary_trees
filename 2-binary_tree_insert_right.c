#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts right child
 * @parent: Parent of the child to insert
 * @value: Number to insert in child
 *
 * Return: Pointer or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
		return (NULL);

	temp->parent = parent;
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;

	if (parent->right != NULL)
	{
	temp->right = parent->right;
	parent->right->parent = temp;
	}
	parent->right = temp;

	return (temp);
}
