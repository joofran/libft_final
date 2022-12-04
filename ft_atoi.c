/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:01:06 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 17:01:42 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const	char	*str)
{	
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return ((int)(res * sign));
}
/*
int	main(void)
{

	char	s1[] = "+2457";

	printf("1\n");
	printf("%d\n", ft_atoi(s1));
	printf("2\n");
	printf("%d\n", atoi(s1));
	return (0);
}

The atoi() function converts the initial portion of the string
pointed to by nptr to int.
*/
