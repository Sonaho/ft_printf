/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:11:46 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 10:59:37 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	t_plist	*plst;
	int		i;

	plst = ft_initialize();
	if (!plst)
		return (0);
	i = 0;
	va_start(plst->tab, fmt);
	while (*(fmt + i))
	{
		if (*(fmt + i) == '%')
			ft_managerargs(++fmt, plst, i);
		else
		{	
			ft_putchar_fd(*(fmt + i), 1);
			plst->size++;
		}
		i += plst->with + 1;
		ft_resetcount(plst);
	}
	va_end(plst->tab);
	free(plst);
	return (plst->size);
}
