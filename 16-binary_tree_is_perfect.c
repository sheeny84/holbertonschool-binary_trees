#include <stdlib.h>
#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/* if both children are null i.e. leaf node*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if both children exist */
	if (tree->left != NULL && tree->right != NULL)
	{
		if (tree->n < (tree->left)->n ||
				tree->n > (tree->right)->n)
			return (0);
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}
