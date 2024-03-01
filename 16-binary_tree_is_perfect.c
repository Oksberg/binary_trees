#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if binary tree is perfect
 * @tree: Roort node of the binary tree
 *
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

	return (0);
}
