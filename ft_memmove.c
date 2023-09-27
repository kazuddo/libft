/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:03:32 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/27 14:35:01 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		dst1 = (unsigned char *)dst;
		src1 = (unsigned char *)src;
		i = n;
		while (i > 0)
		{
			i--;
			dst1[i] = src1[i];
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
