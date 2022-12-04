/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:10:54 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 17:10:56 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char i;
	char	string1[] = "adasx";
	char	string2[] = "adasa";
	i = ft_memcmp(string1, string2, 5);
	printf("%d\n", i);
	printf("%d\n", memcmp(string1, string2, 5));
	return (0);
}
The memcmp() function returns an integer less than, equal to, or
greater than zero if the first n bytes of s1 is found,
respectively, to be less than, to match, or be greater than the
first n bytes of s2.

For a nonzero return value, the sign is determined by the sign of
the difference between the first pair of bytes (interpreted as
unsigned char) that differ in s1 and s2.

If n is zero, the return value is zero.
*/
