/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:34:40 by kazukipc          #+#    #+#             */
/*   Updated: 2023/09/25 16:47:25 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	i;
	size_t	src_size;
	size_t	dst_size;
	size_t	res;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	s = (char *)src;
	i = 0;
	if (dstsize <= dst_size)
		res = src_size + dstsize;
	else
		res = src_size + dst_size;
	while (s[i] && (dst_size + 1) < dstsize)
	{
		dst[dst_size] = s[i];
		dst_size++;
		i++;
	}
	dst[dst_size] = '\0';
	return (res);
}
