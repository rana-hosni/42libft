/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rana <rana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:31:35 by rana              #+#    #+#             */
/*   Updated: 2024/10/01 17:54:54 by rana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	size;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	new = malloc(sizeof(char) * size + 1);
	if (!new)
		return (NULL);
	while (new[i])
	{
		new[i] = (*f)(i, new[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}