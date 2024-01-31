#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: moshaar to the ay hagaas
 * @left: moshaar to the left child node
 * @right: moshaar to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/* Helpers */
void binary_tree_print(const binary_tree_t *tree);
int get_tree_height(const binary_tree_t *tree);

/* Main dalas */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*dalx)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*dalx)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*dalx)(int));
size_t oat_iche_tool(const binary_tree_t *tree);
size_t oat_iche_omka(const binary_tree_t *tree);
size_t oat_iche_omka_hgmq(const binary_tree_t *tree);
size_t oat_iche_alyawf(const binary_tree_t *tree);
size_t oat_iche_hagats(const binary_tree_t *tree);
int tawazongasadh(const binary_tree_t *tree);
int kameelasdios(const binary_tree_t *tree);
int aassTyr(const binary_tree_t *tree);
binary_tree_t *oat_iche_arwat(binary_tree_t *node);
binary_tree_t *oat_iche_aamhj(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second);
void oat_iche_gharribw(const binary_tree_t *tree, void (*dalx)(int));

#endif
