/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:33:08 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/26 17:14:49 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	word_count(char const *s, char c)
{
	size_t	i;
	int		flag;
	int		count;

	i = 0;
	flag = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

char	**conduct_split(char const *s, char c, char **array, int count)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i] && (int)j < count)
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i+len] && s[i + len] != c)
			len++;
		array[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (array[j] == NULL)
		{
			free_array(array);
			return (NULL);
		}
		ft_strlcpy(array[j], s + i, len + 1);
		i += len;
		j++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**array;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	conduct_split(s, c, array, count);

	return (array);
}