/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 23:42:20 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/03/10 15:15:39 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char const *str, char c)
{
	int word_count;
	int i;
	int has_word;

	if (!str || !c)
		return (0);
	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		has_word = 0;
		while (c == str[i] && str[i])
			i++;
		while (c != str[i] && str[i])
		{
			has_word = 1;
			i++;
		}
		while (c == str[i] && str[i])
			i++;
		if (has_word == 1)
			word_count++;
	}
	return (word_count);
}
