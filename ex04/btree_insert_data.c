/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:10:54 by mgould            #+#    #+#             */
/*   Updated: 2016/11/11 17:29:47 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, \
		int (*cmpf)(void *, void *))
{
	t_btree	*box;

	box = *root;
	if (box == 0)
	{
		box = btree_create_node(item);
		return ;
	}
	if (cmpf((box->item), item) < 0)
	{
		box = box->right;
		btree_insert_data(&box, item, cmpf);
	}
	if (cmpf((box->item), item) >= 0)
	{
		box = box->left;
		btree_insert_data(&box, item, cmpf);
	}
	return ;
}
