/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:27:57 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/04 12:32:16 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The strdup() function returns a pointer to a new string which is
//a duplicate of the string s.  Memory for the new string is
//obtained with malloc(3), and can be freed with free(3).

char	*ft_strdup(const char *s1)
{
	char	*ditto;
	int		length;

	length = ft_strlen(s1) + 1;
	ditto = malloc(sizeof(*ditto) * length);
	if (ditto == NULL)
		return (NULL);
	ditto = ft_memmove(ditto, s1, length);
	return (ditto);
}
/*
void main(){
    char dst[] = "passaro";
    char src[] = "pao";
    printf("%d\n", ft_strdup(dst));
    ft_strdup(&dst);
    printf("%s\n", dst);
}
*/
