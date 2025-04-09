#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	/*checking if it is a leaf*/
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		/*checking if the two subtrees are perfect*/
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}
	return (0);
}

