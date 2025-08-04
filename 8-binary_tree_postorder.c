#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - go through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
		{
			binary_tree_postorder(tree->left, func);
		}
		if (tree->right != NULL)
		{
			binary_tree_postorder(tree->right, func);
		}
		func(tree->n);
	}
}
