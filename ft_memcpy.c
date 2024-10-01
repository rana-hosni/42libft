/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:07:46 by relgheit          #+#    #+#             */
/*   Updated: 2024/09/25 12:37:50 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*psrc;
	unsigned char		*pdest;

	psrc = (const unsigned char *) src;
	pdest = (unsigned char *) dest;
	while (n > 0)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
		n--;
	}
	return (dest);
}
