/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rana <rana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:02:00 by rana              #+#    #+#             */
/*   Updated: 2024/09/29 17:14:20 by rana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *p;
    unsigned int	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (NULL);
	if (s_len - start > (unsigned int) len)
	{
		p = malloc(len +1);
		if(!p)
			return(NULL);
		ft_strlcpy(p, s + start, len);
		p[len] = '\0';
		return (p);
	}
}