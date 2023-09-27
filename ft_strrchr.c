/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:04:55 by kazukipc          #+#    #+#             */
/*   Updated: 2023/09/27 15:30:28 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	size_t		pos;
	char		*p;

	p = (char *)s;
	i = ft_strlen(s);
	pos = 0;
	if (c == 0)
		return (&p[i]);
	while (i > 0)
	{
		i--;
		if (s[i] == (char)c)
			return (&p[i]);
	}
	return (NULL);
}
