#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: Root of the binary tree to evaluate
 *
 * Return: Integer
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (-1);
	if (tree->left != NULL && tree->right == NULL)
		return (1);

	balance_factor = binary_tree_balance(tree->left) - binary_tree_balance(tree->right);

	return (balance_factor);
}
