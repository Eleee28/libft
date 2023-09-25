/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:39 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/22 10:26:18 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i])
		i++;
	while (i >= 0)
	{
		if (ptr[i] == (char)c)
			return ((char *)&ptr[i]);
		i--;
	}
	return (0);
}

/*
char	*ft_strrchr(const char *s, int c)
{
	int	end;

	end = ft_strlen(s);
	while (end >= 0)
	{
		if (s[end] == c)
			return ((char *)&s[end]);
		end--;
	}
	return (0);
}
*/
/*
#include <stdio.h>

int main(void)
{
	char *ptr, str[] = "teste";

	ptr = ft_strrchr(str, '\0');
	printf("%p\n", ptr);
	return (0);
}
*/
