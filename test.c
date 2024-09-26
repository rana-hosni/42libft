
#include "libft.h"
#include <stdio.h>
int main()
{
int	i;
	i	= 0;
	char	str[] = "hrHF9o*";
	while (str[i])
	{
		printf("%d",ft_isdigit(str[i]));
		i++;
	}
}
