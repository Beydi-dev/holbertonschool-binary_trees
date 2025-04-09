#include "binary_trees.h"

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
		height_left = binary_tree_height(tree->left) + 1;

	if (tree->right)
		height_right = binary_tree_height(tree->right) + 1;

	/*Returns the greatest height between left and right*/
	return (max(height_left, height_right));
}

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
		int left_height = binary_tree_height(tree->left);
		int right_height = binary_tree_height(tree->right);

		/*checking if the two subtrees are equal or not*/
		if (left_height != right_height)
		{
			return (0);
		}
	}
	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}

