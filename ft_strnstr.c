/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:05:15 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 19:00:56 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	count1;
	int	count2;

	if (*to_find == 0)
		return (str);
	count1 = 0;
	while (count1 < len && str[count1] != '\0')
	{
		count2 = 0;
		while (count1 + count2 < len && str[count1 + count2] == to_find[count2])
		{
			count2++;
			if (to_find[count2] == 0)
				return (&str[count1]);
		}
		count1++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <strings.h>
int	main(void)
{

	char	s1[] = "valentinalez";
	char	s2[] = "alen";

	printf("1\n");
	printf("%s\n", ft_strnstr(s1, s2, 20));
	printf("2\n");
	printf("%s\n", strstr(s1, s2));
	return (0);
}

The strnstr() function locates the first occurrence of the null-termi-nated
string little in the	string big, where not more than	len characters are
searched. Characters that appear after a `\0'	character are not searched.
*/