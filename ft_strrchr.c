/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazukipc <kazukipc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:04:55 by kazukipc          #+#    #+#             */
/*   Updated: 2023/09/21 20:11:35 by kazukipc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = s;
	while(s[i] != '\0')
	{
		if(s[i] == c)
			p = s[i];
		i++;
	}
	if(p == s)
		return (s[i]);
	else
		return (p);
}

// not yet