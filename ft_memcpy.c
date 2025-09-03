/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuksarn <smuksarn@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 09:35:52 by smuksarn          #+#    #+#             */
/*   Updated: 2025/09/01 18:06:10 by smuksarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_ptr_dst;
	unsigned char	*temp_ptr_src;

	if ((src == NULL) && (dest == NULL))
		return (dest);
	temp_ptr_dst = (unsigned char *) dest;
	temp_ptr_src = (unsigned char *) src;
	while (n > 0)
	{
		*(temp_ptr_dst++) = *(temp_ptr_src++);
		n--;
	}
	return (dest);
}
