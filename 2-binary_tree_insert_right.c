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
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
	new_node->right = parent->right;
	parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}