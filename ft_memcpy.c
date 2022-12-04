/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:26:21 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 17:47:17 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int		i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
int main()
{
    char s[] = "trator";
    char d[] = "Paraleasd";
    printf("%s", ft_memcpy(d, s, 4));
    return (0);
}
*/
