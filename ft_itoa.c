/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:34:07 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/26 19:41:54 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_len(int n)
{
	size_t	count;
	long	num;

	count = 1;
	num = n;
	if (n < 0)
	{
		count++;
		num *= -1; 
	}
	while (num / 10 > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	num;
	char	*str;

	len = check_len(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (num < 0)
		num *= -1;
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	if (len == 0 && n < 0)
		str[0] = '-';
	return (str);
}
