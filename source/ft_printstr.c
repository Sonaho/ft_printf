/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:20:03 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 11:59:35 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printstr(va_list ap, t_plist *tp)
{
	char	*str;
	int		cnt;

	str = va_arg(ap, char *);
	if (str == NULL || !str)
	{	
		cnt = ft_strlen("(null)");
		ft_putstr_fd("(null)", 1);
	}
	else
	{
		cnt = ft_strlen(str);
		ft_putstr_fd(str, 1);
	}
	tp->size += cnt;
}
