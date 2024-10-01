/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:02:00 by rana              #+#    #+#             */
/*   Updated: 2024/09/30 14:02:14 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	p = malloc(sizeof(char) * (len +1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	p[len] = '\0';
	return (p);
}

// int main()
// {
//     const char *str = "Hello, world!";
//     char *sub = ft_substr(str, 1, 3);

//     if (sub) {
//         printf("Substring: %s\n", sub);
//         free(sub); // Don't forget to free allocated memory
//     }

//     return 0;
// }