#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child in a binary tree
 * If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t internal_nodes = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	internal_nodes = 1 + binary_tree_nodes(tree->left) +
					 binary_tree_nodes(tree->right);
	return (internal_nodes);
}
