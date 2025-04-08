#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts
 * the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree
 * to count the number of nodes.
 *
 * Return: the number of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_left = 0, node_right = 0;

	if (!tree)
		return (0);

	/*Only counts internal nodes, not leaves*/
	if (!tree->left && !tree->right)
		return (0);

	if (tree->left)
		node_left = binary_tree_nodes(tree->left);

	if (tree->right)
		node_right = binary_tree_nodes(tree->right);

	/*Return the number of internal nodes +1 for the current node itself*/
	return (node_left + node_right + 1);
}
