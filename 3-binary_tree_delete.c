#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete an enitre binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* exit case - no children */
	if ((tree != NULL) && (tree->left != NULL || tree->right != NULL))
	{
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
		}
		if (tree->right != NULL)
		{
			binary_tree_delete(tree->right);
		}
	}
	free(tree);
}
