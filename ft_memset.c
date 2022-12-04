/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:04:39 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/03 17:11:17 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*w;
	size_t	n;

	w = (char *)b;
	n = 0;
	while (n < len)
	{
		w[n] = c;
		n++;
	}
	return (b);
}

//The memset() function fills the first n bytes of the memory area
//pointed to by s with the constant byte c.

//#include <stdlib.h>
//#include <unistd.h>
//#include <string.h>
//
//void main()
//{
//    char p[] = "trator";
//    int i = 'z';
//
//    printf("%s", ft_memset(p, i, 4));
//}
