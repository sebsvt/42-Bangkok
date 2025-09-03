/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuksarn <smuksarn@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:25:45 by smuksarn          #+#    #+#             */
/*   Updated: 2025/09/01 18:12:25 by smuksarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	index;
	char			cc;

	cc = (char) c;
	index = 0;
	while (s[index])
	{
		if (s[index] == cc)
			return ((char *) &s[index]);
		index++;
	}
	if (s[index] == cc)
		return ((char *) &s[index]);
	return (NULL);
}
