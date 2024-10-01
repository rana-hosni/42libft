/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:31:41 by relgheit          #+#    #+#             */
/*   Updated: 2024/09/26 12:13:28 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	size;

	size = ft_strlen(s) + 1;
	p = malloc(size + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, size);
	return (p);
}
// int	main()
// {
// 	char *s = "Hello";
// 	printf("%s", ft_strdup(s));
// }