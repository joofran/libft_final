/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:03:33 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 17:04:14 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
//#include <stdio.h>
//#include <stdlib.h>
//
//int    ft_isprint(int c);
//
//int    main(void)
//{
//    int c1;
//    int c2;
//    int c3;
//    int c4;
//
//    c1 = ' ';
//    c2 = 's';
//    c3 = ':';
//    c4 = '�';
//
//    printf("c1: %c, isprint: %d\n", c1, ft_isprint(c1));
//    printf("c2: %c, isprint: %d\n", c2, ft_isprint(c2));
//    printf("c3: %c, isprint: %d\n", c3, ft_isprint(c3));
//    printf("c4: %c, isprint: %d\n", c4, ft_isprint(c4));
//    return (0);
//}
//