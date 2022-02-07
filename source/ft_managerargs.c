/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_managerargs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:13:21 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 10:38:24 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_managerargs(const char *fmt, t_plist *tp, int i)
{
	if (fmt[i] == 'c')
		ft_printchar(tp->tab, tp);
	else if (fmt[i] == '%')
	{
		ft_putchar_fd('%', 1);
		tp->size ++;
	}
	else if (fmt[i] == 's')
		ft_printstr(tp->tab, tp);
	else if (fmt[i] == 'i' || fmt[i] == 'd')
		ft_printint(tp->tab, tp);
	else if (fmt[i] == 'p')
		ft_printpointer(tp->tab, tp);
	else if (fmt[i] == 'x')
		ft_printhexa(tp->tab, tp, 1);
	else if (fmt[i] == 'X')
		ft_printhexa(tp->tab, tp, 0);
	else if (fmt[i] == 'u')
		ft_printunsigned(tp->tab, tp);
}
