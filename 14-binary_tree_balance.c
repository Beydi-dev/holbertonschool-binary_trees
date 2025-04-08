#include "binary_trees.h"
#include <stdio.h>

/**
 * max - Returns the larger value between two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The larger of the two
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

/**
 * binary_tree_height - Function that measures
 * the height of a binary tree.
 * @tree: Pointer to the root node of the tree
 * to measure the height.
 *
 * Return: the height of a binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	/**
	 * Each recursive call adds +1 to count the edge between
	 * the current node and its left or right child, only
	 * if there is a child.
	 **/
	if (tree->left)
		height_left = binary_tree_height(tree->left);

	if (tree->right)
		height_right = binary_tree_height(tree->right);

	/*Returns the greatest height between left and right*/
	return (max(height_left, height_right) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Balance factor (left height - right height).
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	/*printf("%zu\n", left);*/
	right = binary_tree_height(tree->right);
	/*printf("%zu\n", right);*/

	return (left - right);
}
