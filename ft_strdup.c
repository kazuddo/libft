/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:21:45 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/24 15:27:11 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*str;

	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return ('\0');
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}