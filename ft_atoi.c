/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuksarn <smuksarn@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:03:48 by smuksarn          #+#    #+#             */
/*   Updated: 2025/09/01 14:11:48 by smuksarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

static const char	*ft_isspaces(const char *str)
{
	int	i;

	i = 0;
	while (is_space(str[i]))
		i++;
	return (&str[i]);
}

int	ft_atoi(const char *str)
{
	int			neg;
	long int	res;
	long int	last;

	str = ft_isspaces(str);
	neg = 1;
	res = 0;
	last = 0;
	if (*str == '-')
		neg = -neg;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		if (last > res && neg == 1)
			return (-1);
		else if (last > res && neg == 0)
			return (0);
		str++;
		last = res;
	}
	return (res * neg);
}
