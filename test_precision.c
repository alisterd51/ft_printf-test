/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 14:18:50 by anclarma          #+#    #+#             */
/*   Updated: 2020/01/03 17:00:45 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
//#define ft_printf printf

int	main(int ac, char **av)
{
	int test, ret, ret2;
	void *a = NULL, *b = (void *)0x1028ddf89, *c = (void *)0x0028ddf89,
         *d = (void *)0xff102df89;
	
	printf("Debut des test:\n\n");

	printf("test %%.*s:\n");
	ret = ft_printf("%.*s, %.*s, %.*s, %.*s, %.*s\n", 1, NULL, 2, "abcd", -2, "abcd", -9, NULL, 5, "z");
    ret2 = printf("%.*s, %.*s, %.*s, %.*s, %.*s\n", 1, NULL, 2, "abcd", -2, "abcd", -9, NULL, 5, "z");
    printf("%d\n%d\n\n", ret, ret2);
	
	printf("test %%c:\n");
	ret = ft_printf("%.0c, %.1c, %.2c, %.3c\n", 'a', 'b', 'c', 'd');
	ret2 = printf("%.0c, %.1c, %.2c, %.3c\n", 'a', 'b', 'c', 'd');
	printf("%d\n%d\n\n", ret, ret2);

	printf("test %%s:\n");
	ret = ft_printf("%.0s, %.0s, %.1s, %.2s, %.3s\n", NULL, "abcd", "abcd", NULL, "z");
    ret2 = printf("%.0s, %.0s, %.1s, %.2s, %.3s\n", NULL, "abcd", "abcd", NULL, "z");
    printf("%d\n%d\n\n", ret, ret2);

	printf("test %%p:\n");
	ret = ft_printf("%.0p, %.0p, %.1p, %.2p, %.10p\n", a, b, c, d, d);
	ret2 = printf("%.0p, %.0p, %.1p, %.2p, %.10p\n", a, b, c, d, d);
	printf("%d\n%d\n\n", ret, ret2);

	printf("test %%d:\n");
	ret = ft_printf("%.0d, %.4d, %.10d, %.10d, %.4d\n", 123, 123, 0, -123, 999999999999);
    ret2 = printf("%.0d, %.4d, %.10d, %.10d, %.4d\n", 123, 123, 0, -123, 999999999999);
	printf("%d\n%d\n\n", ret, ret2);

	printf("test %%i:\n");
	ret = ft_printf("%.0i, %.4i, %.10i, %.10i, %.4i\n", 123, 123, 0, -123, 999999999999);
    ret2 = printf("%.0i, %.4i, %.10i, %.10i, %.4i\n", 123, 123, 0, -123, 999999999999);
    printf("%d\n%d\n\n", ret, ret2);

	printf("test %%u:\n");
	ret = ft_printf("%.0u, %.4u, %.10u, %.10u, %.4u\n", 123, 123, 0, -123, 999999999999);
    ret2 = printf("%.0u, %.4u, %.10u, %.10u, %.4u\n", 123, 123, 0, -123, 999999999999);
    printf("%d\n%d\n\n", ret, ret2);

	printf("test %%x:\n");
	ret = ft_printf("%.0x, %.2x, %.5x, %.10x, %.20x\n", -10000000000, -10000000000, -10000000000, -10000000000, -10000000000);
	ret2 = printf("%.0x, %.2x, %.5x, %.10x, %.20x\n", -10000000000, -10000000000, -10000000000, -10000000000, -10000000000);
	printf("%d\n%d\n\n", ret, ret2);

	printf("test %%X:\n");
    ret = ft_printf("%.0X, %.2X, %.5X, %.10X, %.20X\n", -10000000000, -10000000000, -10000000000, -10000000000, -10000000000);
    ret2 = printf("%.0X, %.2X, %.5X, %.10X, %.20X\n", -10000000000, -10000000000, -10000000000, -10000000000, -10000000000);
    printf("%d\n%d\n\n", ret, ret2);

	printf("test %%n:\n");
	test = 50;
    ret2 = ft_printf("il y a 14 char%.4n soit %d char ", &test, test);
    ret2 += ft_printf("ou %d char\n", test);
    test = 50;
    ret = printf("il y a 14 char%.4n soit %d char ", &test, test);
    ret += printf("ou %d char\n", test);
	printf("%d\n%d\n\n", ret, ret2);

	printf("test %%f:\n");
	ret2 = ft_printf("%.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f\n%.1f, %.1f, %.1f, %.1f, %.1f, %.1f, %.1f, %.1f, %.1f, %.1f\n%.20f, %.20f, %.20f, %.20f, %.20f, %.20f, %.20f, %.20f, %.20f, %.20f\n",
			-35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999,
			-35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999,
			-35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999);
	ret = printf("%.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f\n%.1f, %.1f, %.1f, %.1f, %.1f, %.1f, %.1f, %.1f, %.1f, %.1f\n%.20f, %.20f, %.20f, %.20f, %.20f, %.20f, %.20f, %.20f, %.20f, %.20f\n",
            -35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999,
            -35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999,
            -35.8E+10, 3.4E+38, 3.41E+38, 0.0, 0.1, 3.4E-38, 3.41E-38, 10.0E+50, 9.1E+9999, -9.1E+9999);
	printf("%d\n%d\n\n", ret, ret2);
}
