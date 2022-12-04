/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:05:35 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 18:59:14 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)s + len);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
/*
The strrchr() function shall locate the last occurrence of c
(converted to a char) in the string pointed to by s.  The
terminating NUL character is considered to be part of the string.

#include <stdio.h>

void main()
{
	char p[] = "trator";
	int i = 't';
	int *l;
	l = ft_strrchr(p, i);

	printf("%c", *l);
}
*/
