/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:29:43 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 14:57:08 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_pointertostr(unsigned long hexa, char *base, t_plist *tp)
{
	unsigned long	i;
	unsigned long	size;

	size = (unsigned long)ft_strlen(base);
	i = 0;
	if (hexa >= size)
		ft_pointertostr(hexa / size, base, tp);
	ft_putchar_fd(base[hexa % size], 1);
	tp->size ++;
}

void	ft_printpointer(va_list ap, t_plist *tp)
{
	unsigned long	num;

	num = (unsigned long)va_arg(ap, void *);
	ft_putstr_fd("0x", 1);
	tp->size += 2;
	ft_pointertostr(num, "0123456789abcdef", tp);
}
