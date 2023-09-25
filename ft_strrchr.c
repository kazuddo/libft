/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:04:55 by kazukipc          #+#    #+#             */
/*   Updated: 2023/09/25 16:29:42 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	size_t		pos;
	char		*p;

	p = (char *)s;
	i = 0;
	pos = 0;
	while (s[i])
	{
		if (s[i] == c)
			pos = i;
		i++;
	}
	if (pos == 0)
		return (NULL);
	else
		return (&p[pos]);
}
