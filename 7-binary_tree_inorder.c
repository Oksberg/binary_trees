#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree in order
 * @tree: The binary tree to traverse
 * @func: A function to call on the node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
