/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:24:03 by relgheit          #+#    #+#             */
/*   Updated: 2024/09/25 15:34:41 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	sign;

	sign = 1;
	i = 0;
	nb = 0;
	if (!nptr)
		return (0);
	while ((nptr[i] == 32) || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if ((nptr[i] == 45) || (nptr[i] == 43))
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		nb = (nb * 10) + (nptr[i] - 48);
		i++;
	}
	return (nb * sign);
}
// int	main(void)
// {
// 	char str[] = "  ---+--+12/34 ab567";
// 	// ft_atoi(str);
// 	printf("%d", atoi(str));
// 	printf("%d", ft_atoi(str));
// 	return 0 ;
// }