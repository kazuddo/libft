/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazukipc <kazukipc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:14:17 by kazukipc          #+#    #+#             */
/*   Updated: 2023/09/25 11:16:17 by kazukipc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	
	if(!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putstr_fd(s[i], fd);
		i++;
	}
}