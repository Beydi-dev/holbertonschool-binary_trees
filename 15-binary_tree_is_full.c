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
	if (!tree)
		return (0);

	if (tree->parent && tree->left && tree->right)
	{
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
		return (1);
	}
	return (0);
}
