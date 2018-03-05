/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 22:57:56 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/03/04 22:58:00 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;

	mem = (char*)malloc(sizeof(char) * size + 1);
	if (mem == '\0')
		return (NULL);
	while (size > 0)
		mem[size--] = '\0';
	return (mem);
}
