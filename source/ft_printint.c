/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:23:18 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 10:24:33 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_countnum(int num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		if (num == INT_MIN)
			num ++;
		num = num * -1;
		i ++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

void	ft_printint(va_list ap, t_plist *tp)
{
	int		i;
	int		arg;

	arg = va_arg(ap, int);
	i = ft_countnum(arg);
	if (i == 0)
		i ++;
	if (tp->fillchar == '0' && arg < 0)
	{
		ft_putchar_fd('-', 1);
		arg *= -1;
		if (tp->wildcard == '.' && tp->fill > 0)
			tp->fill ++;
	}
	ft_putnbr_fd(arg, 1);
	tp->size += tp->fill + i;
}
