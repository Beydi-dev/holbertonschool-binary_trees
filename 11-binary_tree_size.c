#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures
 * the size of a binary tree.
 * @tree: Pointer to the root node of the tree
 * to measure the size.
 *
 * Return: the size of a binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (!tree)
		return (0);

	/*Calculates the size of the two subtrees*/
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (size_left + size_right + 1);
}
