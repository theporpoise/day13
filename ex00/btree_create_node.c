/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:54:10 by mgould            #+#    #+#             */
/*   Updated: 2016/11/10 20:10:07 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree	*box;

	box = (t_btree*)malloc(sizeof(box));
	box->item = item;
	box->left = 0;
	box->right = 0;
	return (box);
}
