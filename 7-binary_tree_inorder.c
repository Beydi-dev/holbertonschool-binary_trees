#include "binary_trees.h"
/**
 * binary_tree_inorder - Function that goes through
 * a binary tree using in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
	/*Recursive call in the left subtree*/
	binary_tree_inorder(tree->left, func);
	/*For the current node: apply the function func to its value n*/
	func(tree->n);
	/*Recursive call in the right subtree*/
	binary_tree_inorder(tree->right, func);
	}
}
