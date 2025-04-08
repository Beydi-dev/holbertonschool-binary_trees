#include "binary_trees.h"
/**
 * binary_tree_sibling - Function that finds
 * the sibling of a node.
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	/*Checks if the passed node is the left child or the right child*/
	if (node == node->parent->right)
		return (node->parent->left);
	else if (node == node->parent->left)
		return (node->parent->right);
	else
		return (NULL);
}
