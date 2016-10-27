#include "ft_data.h"

t_tree	*ft_treenew(void *data)
{
	t_tree	*tree;

	if ((tree = (t_tree*)malloc(sizeof(t_tree))) != NULL)
	{
		tree->data = data;
		tree->left = NULL;
		tree->right = NULL;
	}
	return (tree);
}
