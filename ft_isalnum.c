/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:02:23 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/04 13:29:45 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int    ft_isalnum(int c);

int    main(void)
{
	int c1;
	int c2;
	int c3;
	int c4;

	c1 = 'Z';
	c2 = ',';
	c3 = ':';
	c4 = '7';

	printf("c1: %c, isalnum: %d\n", c1, ft_isalnum(c1));
	printf("c2: %c, isalnum: %d\n", c2, ft_isalnum(c2));
	printf("c3: %c, isalnum: %d\n", c3, ft_isalnum(c3));
	printf("c4: %c, isalnum: %d\n", c4, ft_isalnum(c4));
	return (0);
}
*/
