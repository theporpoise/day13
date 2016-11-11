/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:08:08 by mgould            #+#    #+#             */
/*   Updated: 2016/11/11 13:45:00 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*box;

	box = root;
	applyf(box->item);
	if (box->left)
	{
		btree_apply_prefix(box->left, applyf);
	}
	if (box->right)
	{
		btree_apply_prefix(box->right, applyf);
	}
	return ;
}
