/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:03:23 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 19:17:45 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

/*
#include <stdio.h>
#include <stdlib.h>

int    ft_isdigit(int c);

int    main(void)
{
	int c1;
	int c2;
	int c3;
	int c4;

	c1 = 'Z';
	c2 = '0';
	c3 = ':';
	c4 = '7';

	printf("c1: %c, is_digit: %d\n", c1, ft_isdigit(c1));
	printf("c2: %c, is_digit: %d\n", c2, ft_isdigit(c2));
	printf("c3: %c, is_digit: %d\n", c3, ft_isdigit(c3));
	printf("c4: %c, is_digit: %d\n", c4, ft_isdigit(c4));
	return (0);
}

*/
