#include "binary_trees.h"

/**
 * binary_tree_preorder - Visits nodes using pre-order traversal
 * @tree: The binary tree to traverse
 * @func: A function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *temp;

	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	if (tree->left != NULL)
	{
		temp = tree->left;
		func(temp->n);

		if (tree->left->left != NULL)
		{
			temp = tree->left->left;
			func(temp->n);
		}
		temp = tree->left->right;
		func(temp->n);
	}
	if (tree->right != NULL)
	{
		temp = tree->right;
		func(temp->n);

		if (tree->right->left != NULL)
		{
			temp = tree->right->left;
			func(temp->n);
		}
		temp = tree->right->right;
		func(temp->n);
	}

}
