#include <stdlib.h>
#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
#include "9-binary_tree_height.c"
#include "10-binary_tree_depth.c"

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);
	
	/* find the height of the tree */
	height = binary_tree_height(tree);

	return (is_perfect_recursive(tree, height));
}

/**
 * is_perfect_recursive - recursive function to chekc if binary tree is
 * perfect
 * @tree: tree to check
 * @height: height of the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int height)
{
	int depth;

	/* if node is leaf */
	if (binary_tree_is_leaf(tree))
	{
		depth = binary_tree_depth(tree);
		return (height == depth);
	}

	/* if only one child exists */
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (is_perfect_recursive(tree->left, height) && 
			is_perfect_recursive(tree->right, height));
}
