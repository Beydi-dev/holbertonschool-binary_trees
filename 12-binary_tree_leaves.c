#include "binary_trees.h"

/**
 * binary_tree_leaves - count number of leaves.
 * @tree: Pointer to the tree to check.
 *
 * Return: number of leaves, 0 otherwise.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
