/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:34:40 by kazukipc          #+#    #+#             */
/*   Updated: 2023/09/27 15:23:28 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	i;
	size_t	src_size;
	size_t	dst_size;
	size_t	res;

	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	dst_size = ft_strlen(dst);
	s = (char *)src;
	if (size <= dst_size)
		return (src_size + size);
	else
		res = src_size + dst_size;
	i = 0;
	while (s[i] && i < size - dst_size - 1)
	{
		dst[dst_size + i] = s[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (res);
}
