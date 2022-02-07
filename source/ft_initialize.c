/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:36:56 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 10:36:59 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_plist	*ft_initialize(void)
{
	t_plist	*tpl;

	tpl = (t_plist *)malloc(sizeof(t_plist));
	if (!tpl)
		return (NULL);
	tpl->size = 0;
	ft_resetcount(tpl);
	return (tpl);
}

void	ft_resetcount(t_plist *tpl)
{
	tpl->fill = 0;
	tpl->with = 0;
	tpl->front = -1;
	tpl->fillchar = ' ';
	tpl->paddzero = 0;
	tpl->paddspace = 0;
	tpl->wildcard = 0;
}
