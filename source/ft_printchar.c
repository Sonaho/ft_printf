/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:16:11 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 11:00:15 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printchar(va_list ap, t_plist *tp)
{
	char	c;

	c = (char)va_arg(ap, int);
	ft_putchar_fd(c, sizeof(char));
	tp->size ++;
}
