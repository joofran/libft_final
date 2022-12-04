/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:02:37 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 17:02:58 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	else
		return (1);
}
//#include <stdio.h>
//#include <stdlib.h>
//
//int    ft_isalpha(int c);
//
//int    main(void)
//{
//    int c1;
//    int c2;
//    int c3;
//    int c4;
//
//    c1 = 'Z';
//    c2 = 's';
//    c3 = ':';
//    c4 = '7';
//
//    printf("c1: %c, is_alpha: %d\n", c1, ft_isalpha(c1));
//    printf("c2: %c, is_alpha: %d\n", c2, ft_isalpha(c2));
//    printf("c3: %c, is_alpha: %d\n", c3, ft_isalpha(c3));
//    printf("c4: %c, is_alpha: %d\n", c4, ft_isalpha(c4));
//    return (0);
//}
//
