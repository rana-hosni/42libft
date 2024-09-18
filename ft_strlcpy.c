/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:14:32 by relgheit          #+#    #+#             */
/*   Updated: 2024/09/18 12:24:42 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
size_t  ft_strlcpy(char *dst, const char *src, size_t dsize)
{
    unsigned int i;
    unsigned int ssize;
    
    i = 0;
    ssize = 0;
    if (!dst || !src)
        return (0);
    while (src[ssize])
        ssize++;
    if (dsize != 0)
    {
        while (src[i] && i < (ssize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (ssize);
    // printf("%s",src);
}
// int main(void)
// {
// 	// unsigned int size;
// 	// size = 10;
// 	char dest[5] = "";
// 	char src[] = "";

// 	printf("%ld\n", ft_strlcpy(dest, src, 5));
//     printf("%s",dest);
// }