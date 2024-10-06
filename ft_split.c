/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rana <rana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:22:24 by relgheit          #+#    #+#             */
/*   Updated: 2024/10/06 12:56:11 by rana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		if (s[i + 1] == '\0' && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static char	*the_word(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	word = malloc(sizeof(char) * i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**free_all(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char *) * (count_word((char *)s, c) + 1));
	if (!arr || !s)
		return (NULL);
	while (i < count_word((char *)s, c))
	{
		while (s[j] == c)
			j++;
		arr[i] = the_word(&s[j], c);
		if (!arr[i])
		{
			free_all(arr, i - 1);
			return (NULL);
		}
		i++;
		while (s[j] != c && s[j] != '\0')
			j++;
	}
	arr[i] = NULL;
	return (arr);
}
#include <stdio.h>
int main(void)
{
	char **tabstr = ft_split("hello world", ' ');
	int i = 0;
	// printf("Calling count from main, count = %d\n", count_word("ahmed helmi", ' '));
	while (tabstr[i] != NULL)
			{
				printf("%s", tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
	return 0;
}