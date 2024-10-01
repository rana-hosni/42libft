/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:29:50 by relgheit          #+#    #+#             */
/*   Updated: 2024/09/25 13:15:22 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	psrc = (unsigned char *) src;
	pdest = (unsigned char *) dest;
	if (src == dest || n == 0)
		return (dest);
	if (psrc < pdest)
		while (n--)
			pdest[n] = psrc[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
