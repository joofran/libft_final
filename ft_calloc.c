/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisost <jcrisost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:49:59 by jcrisost          #+#    #+#             */
/*   Updated: 2022/12/04 10:50:16 by jcrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The calloc() function allocates memory for an
//array of nmemb elements of size bytes each and
//returns a pointer to the allocated memory. The
//memory is set to zero. If nmemb or size is 0,
//then calloc() returns either NULL, or a unique
//pointer value that can later be successfully
//passed to free().
void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	if (count == 0)
		count = 1;
	if (size == 0)
		size = 1;
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}
