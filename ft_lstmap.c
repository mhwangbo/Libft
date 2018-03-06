/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 17:57:22 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/03/05 18:04:37 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*temp;

	new = NULL;
	temp = NULL;
	while (lst != NULL)
	{
		if (new == NULL)
		{
			new = f(lst);
			temp = new;
		}
		else
			temp->next = f(lst);
	}
	return (new);
}
