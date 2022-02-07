/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:27:30 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 12:56:12 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_numberstr(unsigned int hexa, char *base, t_plist *tp)
{
	unsigned int	i;
	unsigned int	size;

	size = (long long)ft_strlen(base);
	i = 0;
	if (hexa >= size)
		ft_numberstr(hexa / size, base, tp);
	ft_putchar_fd(base[hexa % size], 1);
	tp->size ++;
}

void	ft_printhexa(va_list ap, t_plist *tp, int tolower)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	if (tolower)
		ft_numberstr(num, "0123456789abcdef", tp);
	else
		ft_numberstr(num, "0123456789ABCDEF", tp);
}
