/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazukipc <kazukipc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:50:31 by kazukipc          #+#    #+#             */
/*   Updated: 2023/09/21 21:01:13 by kazukipc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	int	i;

	c1 = s1;
	c2 = s2;
	i = 0;
	while (i < n)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		i++;
		c1++;
		c2++;
	}
	return (0);
}
