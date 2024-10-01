/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:46:08 by relgheit          #+#    #+#             */
/*   Updated: 2024/09/30 14:57:32 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return ('\0');
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
		i++;
	if (size <= j)
		return (size + i);
	else
	{
		i = 0;
		while (src[i] != '\0' && (j + i) <= (size - 1))
		{
			dest[j + i] = src[i];
			i++;
		}
		dest[j] = '\0';
		return (j + i);
	}
}
// #include <stdio.h>
// int main(void)
// {
// 	// unsigned int size;
// 	// size = 10;
// 	char s1[] = "no";
// 	char s2[] = "hello";

// 	printf("%lu", ft_strlcat(s1, s2, 10));
// }
