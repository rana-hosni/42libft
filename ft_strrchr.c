/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relgheit <relgheit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:56:04 by relgheit          #+#    #+#             */
/*   Updated: 2024/09/19 15:09:07 by relgheit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *str, int c)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    while (i >= 0)
    {
        if (str[i] == c)
            return ((char *) str + i);
        i--;
    }
    if ((char) c == '\0')
        return ((char *)str + i);
    return (0);
}