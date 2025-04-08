#include "binary_trees.h"


int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	if (!tree)
	{
		return (0);
	}

	return (left - right);
}