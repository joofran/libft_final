/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:27:44 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/04 15:09:21 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int str)
{
	if (str >= 'A' && str <= 'Z')
		str = str + 32;
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char original = 'A';
	printf("ORIGINAL: %c", original);
	printf("\n");
	printf("LOWERCASE: %c", ft_tolower(original));
	printf("\n");
	return (0);
}
*/