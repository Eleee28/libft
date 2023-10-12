/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:56:42 by ejuarros          #+#    #+#             */
/*   Updated: 2023/10/05 11:47:28 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*aux_src;
	char		*aux_dest;

	aux_src = src;
	aux_dest = dest;
	if ((!dest && !src) || n <= 0)
		return (dest);
	if (aux_src < aux_dest)
	{
		aux_dest = aux_dest + (n - 1);
		aux_src = aux_src + (n - 1);
		while (n-- > 0)
			*aux_dest-- = *aux_src--;
		return (dest);
	}
	while (n-- > 0)
		*aux_dest++ = *aux_src++;
	return (dest);
}

/*
int main() 
{
    char str1[] = "Hello,";
    char str2[] = " world!";

    printf("Original str1: %s\n", str1);
    ft_memmove(str1 + 6, str2, 7);
    printf("Modified str1: %s\n", str1);

    return 0;
}
*/
