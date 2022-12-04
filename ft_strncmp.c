/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:05:02 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 19:03:00 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	x;

	if (n == 0)
		return (0);
	x = 0;
	while ((s1[x] != '\0') && (s1[x] == s2[x]) && x < n - 1)
	{
		x++;
	}
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
/*
int	main(void)
{
	char i;
	char	string1[] = "ad";
	char	string2[] = "cd";
	i = ft_strncmp(string1, string2, 2);
	printf("%d\n", i);
	printf("%d\n", strncmp(string1, string2, 2));
	return (0);
}
*/
