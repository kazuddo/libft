/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:25:16 by kazukipc          #+#    #+#             */
/*   Updated: 2023/09/25 16:23:47 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_space(char c)
{
	if (c == 32 || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	isminus;

	num = 0;
	i = 0;
	while (ft_is_space(str[i]) == 1)
		i++;
	if (str[i] == '-')
		isminus = -1;
	else if (str[i] == '+')
		isminus = 1;
	else
		return (0);
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = 10 * num + (str[i] -'0');
	}
	return (num);
}
