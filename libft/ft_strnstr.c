/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:35 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/21 09:46:46 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	str_cnt;
	size_t	to_find_cnt;
	size_t	aux;

	str_cnt = 0;
	to_find_cnt = 0;
	aux = str_cnt;
	if (!to_find[to_find_cnt])
		return ((char *)str);
	while (str[str_cnt] && str_cnt < size)
	{
		if (str[str_cnt] == to_find[to_find_cnt] && str_cnt < size)
		{
			while (str[str_cnt] && to_find[to_find_cnt]
				&& str[str_cnt] == to_find[to_find_cnt])
			{
				str_cnt++;
				to_find_cnt++;
			}
			if (!to_find[to_find_cnt])
				return ((char *)str[str_cnt]);
			to_find_cnt = 0;
			str_cnt++;// = str[str_cnt] + 1;
		}
		else
			str_cnt++;
	}
	return (0);
}
*/

/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[i + j - 1]);
		else
			i++;
	}
	return (0);	
}
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && needle[j]
			&& i + j < len)
			j++;
		if (!needle[j])
			return ((char *)haystack + i);
		j = 0;
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *str = "Hello world!";
	char *find = "world";
	
	printf("%s\n", ft_strnstr(str, find, 5));
    return (0);
}
*/
