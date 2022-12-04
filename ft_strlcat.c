/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:24:25 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/04 11:24:28 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < size)
		j++;
	while ((src[k]) && ((j + k + 1) < size))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}

//strlcat() appends string src to the end of	dst.  It will append at	most
//dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,	unless
//dstsize is	0 or the original dst string was longer	than dstsize (in
//practice this should not happen as it means that either dstsize is incorrect
//or	that dst is not	a proper string).
/*
void main()
{
    char dst[] = "passaro";
    char src[] = "pao";
    printf("%d\n", ft_strlcat(dst, src, 15));
    ft_strlcat(&dst, &src, 7);
    printf("%s\n", dst);
}
*/
