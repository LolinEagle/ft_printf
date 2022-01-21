/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:22:43 by frrusso           #+#    #+#             */
/*   Updated: 2022/01/21 17:22:45 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa(unsigned int n)
{
	int		i;
	char	*res;

	i = ft_dsize(n);
	res = malloc (sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	while (i > 0)
	{
		i--;
		res[i] = '0' + (n % 10);
		n = n / 10;
	}
	return (res);
}
