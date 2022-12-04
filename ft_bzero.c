/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:02:02 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 17:02:05 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	char	*w;
	int		n;

	n = 0;
	w = (char *)b;
	while (n < len)
	{
		w[n] = 0;
		n++;
	}
	return (b);
}
//#include <stdlib.h>
//#include <unistd.h>
//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//    char p[] = "trator";
//
//    printf("%d", ft_bzero(p, 6));
//    return (0);
//}
