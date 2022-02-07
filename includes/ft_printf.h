/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:08:39 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 12:56:18 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct s_plist
{
	va_list	tab;
	int		size;
	int		fill;
	int		with;
	char	front;
	char	fillchar;
	char	wildcard;
	int		paddzero;
	int		paddspace;
}	t_plist;
int			ft_printf(const char *fmt, ...);
void		ft_managerargs(const char *fmt, t_plist *tp, int i);
void		ft_printchar(va_list ap, t_plist *tp);
void		ft_printstr(va_list ap, t_plist *tp);
void		ft_printint(va_list ap, t_plist *tp);
void		ft_printhexa(va_list ap, t_plist *tp, int tolower);
void		ft_printpointer(va_list ap, t_plist *tp);
void		ft_printunsigned(va_list ap, t_plist *tp);
t_plist		*ft_initialize(void);
void		ft_resetcount(t_plist *tpl);
void		ft_numberstr(unsigned int hexa, char *base, t_plist *tp);
#endif