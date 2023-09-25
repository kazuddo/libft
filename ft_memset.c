/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:32:26 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/25 15:19:35 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)buf;
	while (i < n)
	{
		tmp[i] = ch;
		i++;
	}
	return (buf);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "0123456789";

// 	ft_memset(str + 2, '*', 5);

// 	printf("%s\n", str);

// 	return (0);
// }