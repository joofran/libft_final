/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:03:12 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 19:08:23 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
//#include <stdio.h>
//#include <stdlib.h>
//
//int    ft_isascii(int c);
//
//int    main(void)
//{
//    int c1;
//    int c2;
//    int c3;
//    int c4;
//
//    c1 = 'Z';
//    c2 = ',';
//    c3 = ':';
//    c4 = '�';
//
//    printf("c1: %c, isalnum: %d\n", c1, ft_isascii(c1));
//    printf("c2: %c, isalnum: %d\n", c2, ft_isascii(c2));
//    printf("c3: %c, isalnum: %d\n", c3, ft_isascii(c3));
//    printf("c4: %c, isalnum: %d\n", c4, ft_isascii(c4));
//    return (0);
//}
//
