/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:04:46 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 19:14:42 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ESSE PRECISO TESTAR BEM
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ((char *)s);
}
/*The strchr() function returns a pointer to the first occurrence
of the character c in the string s.

#include <stdio.h>
void main()
{
    char p[] = "trator";
    int i = 't';
    int *l;
    l = ft_strchr(p, i);

    printf("%c", *l);
}
*/