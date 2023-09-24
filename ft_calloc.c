/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:06:06 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/24 15:21:09 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = (void *)malloc(count * size);
	if(!array)
		return ('\0');
	ft_bzero(array, count * size);
	return (array);
}