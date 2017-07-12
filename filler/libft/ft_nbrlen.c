/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sromanet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 13:40:33 by sromanet          #+#    #+#             */
/*   Updated: 2016/12/17 13:48:04 by sromanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_nbrlen(int n)
{
	int				i;
	unsigned int	m;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		m = -n;
	}
	else
		m = n;
	while (m != 0)
	{
		m /= 10;
		i++;
	}
	return (i);
}