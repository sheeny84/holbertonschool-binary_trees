#include <stdlib.h>
#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
#include "9-binary_tree_height.c"
#include "10-binary_tree_depth.c"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node of the tree to check
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	if ((node->parent)->left == node)
		return ((node->parent)->right);
	else
		return ((node->parent)->left);
}
