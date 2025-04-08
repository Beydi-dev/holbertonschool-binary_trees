#include "binary_trees.h"
/**
 * binary_tree_is_full - Function that checks
 * if a binary tree is full.
 * @tree: Pointer to the root node of the tree
 * to check
 *
 * Return: 1 if it's full, 0 if it isn't.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
		if (left_full == 1 && right_full == 1)
			return (1);
	}
	return (0);
}
