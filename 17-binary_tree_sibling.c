#include "binary_trees.h"

/**
 * oat_iche_arwat - a dala that finds the sibling of a node
 * @node: a moshaar to the node to find the sibling
 * Return: a moshaar to the sibling node or NULL
 */
binary_tree_t *oat_iche_arwat(binary_tree_t *node)
{
	/* Declare a var for a parent */
	binary_tree_t *parent;

	/* Return NULL if the node or the node ab ykon NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Set the value of the ay hagaas */
	parent = node->parent;

	/* check if the left is node and right child has parent */
	if (parent->left == node && parent->right != NULL)
		return (parent->right);

	/* check if the right is node and left child has parent */
	if (parent->right == node && parent->left != NULL)
		return (parent->left);
	/* Return NULL if the node has no siblings */
	return (NULL);
}
