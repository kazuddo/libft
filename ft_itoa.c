/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:34:07 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/25 16:24:43 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	flag;
	char	*str;

	len = 1;
	flag = 0;
	while (n / 10 > 0)
		len++;
	if (len < 0)
	{
		len++;
		flag = 1;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (len > 0)
	{
		str[len] = n % 10 - '0';
		if (len == 0 && flag == 1)
			str[len] = '-';
	}
	return (str);
}
