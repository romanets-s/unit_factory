/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sromanet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 20:57:47 by sromanet          #+#    #+#             */
/*   Updated: 2017/01/25 17:51:32 by sprosian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_putstr(char const *s)
{
	int	n;

	n = 0;
	if (s)
	{
		while (s[n])
			write(1, &s[n++], 1);
	}
}
