/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:25:16 by kazukipc          #+#    #+#             */
/*   Updated: 2023/09/26 19:18:13 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_overflow(long *num, char m, int isminus)
{
	int	flag;

	flag = 0;
	if (isminus == 1)
	{
		if ((*num == LONG_MAX / 10 && (m - '0') > 7) || 
			*num > LONG_MAX / 10)
		{
			*num = (int) LONG_MAX;
			flag = 1;
		}
	}
	else
	{
		if ((*num == LONG_MAX / 10 && (m - '0') > 8) ||
			*num > LONG_MAX / 10)
		{
			*num = (int) LONG_MIN;
			flag = 1;
		}
	}
	return (flag);

}

int	ft_is_space(char c)
{
	if (c == 32 || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	num;
	int	isminus;

	num = 0;
	i = 0;
	while (ft_is_space(str[i]) == 1)
		i++;
	if (str[i] == '-')
		isminus = -1;
	else if (str[i] == '+')
		isminus = 1;
	else if ('0' <= str[i] && str[i] <= '9')
	{
		isminus = 1;
		num += str[i] - '0';
	}
	else
		return (0);
	i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if(is_overflow(&num, str[i], isminus))
			return (num);
		num = 10 * num + (str[i] -'0');
		i++;
	}
	return (isminus * num);
}
