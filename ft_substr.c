/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:29:18 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/24 15:39:21 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * len);
	if(!str)
		return (NULL);
	i = 0;
	while(i <= len)
	{
		str[i] = s[i + start];
		i++;
	}
	return (str);
}