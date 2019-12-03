/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:16:26 by anclarma          #+#    #+#             */
/*   Updated: 2019/12/03 14:52:03 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int		main(int ac, char **av)
{
	int ret, ret2;
	int	test;
	void *a = NULL, *b = (void *)0x1028ddf89, *c = (void *)0x0028ddf89,
		 *d = (void *)0xff102df89;

	printf("Debut des test:\n\n");
	printf("test %%c:\n");
	ret2 = ft_printf("%c, %c,%c,%c,%c,%c,%c,%c,%c,%c,%c,%c\n", -1500, -128,
			-125, -50, -1, 0, 1, 78, 126, 127, 128, 500);
	ret = printf("%c, %c,%c,%c,%c,%c,%c,%c,%c,%c,%c,%c\n", -1500, -128, -125,
			-50, -1, 0, 1, 78, 126, 127, 128, 500);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%s:\n");
	ret2 = ft_printf("%s, %s, %s,%s ,%s ,%s\n", NULL, "qwerty", "qwe\0ty",
			" ", "", "a\0");
	ret = printf("%s, %s, %s,%s ,%s ,%s\n", NULL, "qwerty", "qwe\0ty", " ",
			"", "a\0");
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%p:\n");
	ret2 = ft_printf("%p, %p, %p, %p, %p, %p\n", NULL, a, b, c, d,
			(void *)0x0101);
	ret = printf("%p, %p, %p, %p, %p, %p\n", NULL, a, b, c, d, (void *)0x0101);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%d:\n");
	ret2 = ft_printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	ret = printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%i:\n");
	ret2 = ft_printf("%i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	ret = printf("%i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%u:\n");
	ret2 = ft_printf("%u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	ret = printf("%u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%x:\n");
	ret2 = ft_printf("%x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	ret = printf("%x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%X:\n");
	ret2 = ft_printf("%X, %X, %X, %X, %X, %X, %X, %X, %X, %X, %X, %X\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	ret = printf("%X, %X, %X, %X, %X, %X, %X, %X, %X, %X, %X, %X\n",
			-10000000000, -2147483649,-2147483648, -2147483647, -200, -1, 0,
			1, 80, 2147483645, 2147483647, 3147483648);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%n:\n");
	ret2 = ft_printf("il y a 14 char%n soit %d char ", &test, test);
	ret2 += ft_printf("ou %d char\n", test);
	ret = printf("il y a 14 char%n soit %d char ", &test, test);
	ret += printf("ou %d char\n", test);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%f:\n");
	ret2 = ft_printf("%f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", -35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999);
	ret = printf("%f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", -35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%g:\n");
	ret2 = ft_printf("%g, %g, %g, %g, %g, %g, %g, %g, %g, %g\n", -35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999);
	ret = printf("%g, %g, %g, %g, %g, %g, %g, %g, %g, %g\n", -35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%e:\n");
	ret2 = ft_printf("%e, %e, %e, %e, %e, %e, %e, %e, %e, %e\n", -35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999);
	ret = printf("%e, %e, %e, %e, %e, %e, %e, %e, %e, %e\n", -35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);
	return (0);
}
