/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 19:47:16 by klaurine          #+#    #+#             */
/*   Updated: 2019/08/26 19:33:14 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *p;
	t_list *temp;

	p = *alst;
	while (p)
	{
		temp = p;
		del((p)->content, (p)->content_size);
		p = p->next;
		free(temp);
		temp = NULL;
	}
}
