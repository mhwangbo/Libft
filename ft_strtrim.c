/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 23:12:46 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/03/04 23:13:04 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		temp;

	i = 0;
	j = 0;
	temp = 0;
	str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			temp++;
		if (s[i - 1] == '\0')
			i += temp;
		if (s[temp + 1] == '\0')
			return (str);
		while (s[i] != ' ' || s[i] != '\n' || s[i] != '\t')
			str[j++] = s[i++];
	}
	return (str);
}
