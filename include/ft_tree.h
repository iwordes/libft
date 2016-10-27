#ifndef FT_TREE_H
# define FT_TREE_H

typedef struct	s_tree
{
	void		*content;
	size_t		content_size;
	void		*left;
	void		*right;
}				t_tree;

void			ft_treeclr(t_tree *tree);
void			ft_treedel(t_tree *tree);
void			ft_treefind(t_tree *tree, void *data, int (*cmp)(void*, void*));
void			ft_treeins(t_tree *tree, void *data, int (*cmp)(void*, void*));
t_tree			ft_treenew(void *data);

#endif
