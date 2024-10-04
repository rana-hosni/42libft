/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:22:24 by relgheit          #+#    #+#             */
/*   Updated: 2024/10/04 14:39:56 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[0] == c)
			i++;
		if (ft_strchr(&s[i], c))
			count++;
		i++;
	}
	return (count);
}

static char	*the_word(char *s, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start +1));
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}
// static char	**free_all(char **arr, int i)
// {
// 	while (i >= 0)
// 	{
// 		free(arr[i]);
// 		i--;
// 	}
// 	free(arr);
// 	return (NULL);
// }

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	flag;

	i = 0;
	j = 0;
	flag = -1;
	arr = malloc(sizeof(char *) * (count_word((char *)s, c) + 1));
	if (!arr || !s)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if (s[i] != c && flag < 0)
			flag = i;
		else if (((s[i] == c || i == ft_strlen(s)) && flag >= 0))
		{
			arr[j] = the_word((char *)s, flag, i);
			flag = -1;
		}
		j++;
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
