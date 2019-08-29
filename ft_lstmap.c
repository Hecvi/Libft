/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:17:02 by klaurine          #+#    #+#             */
/*   Updated: 2019/08/29 20:35:59 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *buffer;

	if (!lst || !f)
		return (NULL);
	list = f(lst);
	while (lst)
	{
		lst = lst->next;
		buffer = f(lst);
		list

}
