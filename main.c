/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:35:41 by aalmela-          #+#    #+#             */
/*   Updated: 2022/02/07 13:30:45 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/ft_printf.h"

int	main(void)
{
	int				i;
	int				j;
	int				*ptr;
	char			c;

/*	printf("\n");
	i = printf("str: hola mundo\n");
	j = ft_printf("str: hola mundo\n");
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("char {%c}, string {%s}\n", 'R', "una cadena\t");
	j = ft_printf("char {%c}, string {%s}\n", 'R', "una cadena\t");
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = ft_printf("str: hola %s NULL %s\n", "mundo", NULL);
	j = ft_printf("str: hola %s NULL %s\n", "mundo", NULL);
*/	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	ptr = (int *)malloc(sizeof(int));
	i = printf("puntero LONG_MIN{%p} LONG_MAX{%p}\n", ptr, LONG_MAX);
	j = ft_printf("puntero LONG_MIN{%p} LONG_MAX{%p}\n", ptr, LONG_MAX);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	free(ptr);
	printf("\n");
	ptr = (int *)malloc(sizeof(int));
	i = printf("puntero ULONG_MAX{%p} -ULONG_MAX{%p}\n", ULONG_MAX, -ULONG_MAX);
	j = ft_printf("puntero ULONG_MAX{%p} -ULONG_MAX{%p}\n", ULONG_MAX, -ULONG_MAX);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	free(ptr);
	printf("\n");
/*	i = printf("\t\n\r\v\f\n");
	j = ft_printf("\t\n\r\v\f\n");
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("decimal {%d}, integer {%i} unsigned {%u}\n", INT_MAX,
			INT_MIN, UINT_MAX);
	j = ft_printf("decimal {%d}, integer {%i} unsigned {%u}\n", INT_MAX,
			INT_MIN, UINT_MAX);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("Hexadecimal unsigned int {%x}\n", UINT_MAX);
	j = ft_printf("Hexadecimal unsigned int {%x}\n", UINT_MAX);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("Hexadecimal u.short {%x} u.short {%x}\n",
			SHRT_MAX, SHRT_MIN);
	j = ft_printf("Hexadecimal u.short {%x} u.short {%x}\n",
			SHRT_MAX, SHRT_MIN);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("Hexadecimal u.short {%X} u.short {%X}\n",
			SHRT_MAX, SHRT_MIN);
	j = ft_printf("Hexadecimal u.short {%X} u.short {%X}\n",
			SHRT_MAX, SHRT_MIN);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("Hexadecimal ulong max {%x}\n", ULONG_MAX);
	j = ft_printf("Hexadecimal ulong max {%x}\n", ULONG_MAX);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("Hexadecimal long min {%x}\n", LONG_MIN);
	j = ft_printf("Hexadecimal long min {%x}\n", LONG_MIN);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	printf("\nBONUS --- \n");
	i = printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c|||\n",
		' ', '!', '"', '#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>',
		'?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',
		']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{',
		'|','}','~','');
	j = ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c|||\n",
		' ', '!', '"', '#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>',
		'?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',
		']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{',
		'|','}','~','');
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	i = printf("%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c///\n",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
 j = ft_printf("%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c|%1c|%2c|%3c|%4c///\n",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	i = printf("str {%10s}{%-7s}\n", "abc", "def");
	j = ft_printf("str {%10s}{%-7s}\n", "abc", "def");
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("char: {%c}{%3c%10c}{%-2c}{%-10c}\n", 'x', 'x', 'x', 'x', 'x');
	j = ft_printf("char: {%c}{%3c%10c}{%-2c}{%-10c}\n", 'x', 'x', 'x', 'x', 'x');
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("int: {%13i}{%13i}{%10i}\n", 1234567890, -4, 0);
	j = ft_printf("int: {%13i}{%13i}{%10i}\n", 1234567890, -4, 0);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("int: %.5i %.5i %.3i\n", 2, -33, -2372);
	j = ft_printf("int: %.5i %.5i %.3i\n", 2, -33, -2372);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
	printf("\n");
	i = printf("int: %05i %05i %03i\n", 2, -33, -2372);
	j = ft_printf("int: %05i %05i %03i\n", 2, -33, -2372);
	printf("printf size: %d || ft_printf size: %d\n", i, j);
*/	
	return (0);
}
