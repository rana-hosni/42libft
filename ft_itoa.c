/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:06:02 by relgheit          #+#    #+#             */
/*   Updated: 2024/10/01 14:25:00 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	size_of_n(int n)
{
	unsigned int	size;

	size = 1;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n >= 10)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	size;

	size = size_of_n(n);
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	str[size] = '\0';
	if (n == 0)
		return ("0");
	while (size-- && n > 0)
	{
		str[size] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

// int main(void)
// {
// 	printf("%s",ft_itoa(-1));
// }