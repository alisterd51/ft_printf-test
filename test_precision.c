/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 14:18:50 by anclarma          #+#    #+#             */
/*   Updated: 2020/02/15 10:59:36 by anclarma         ###   ########.fr       */
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
	ret = ft_printf("%d: %.*s, %d: %.*s, %d: %.*s, %d: %.*s, %d: %.*s\n", 1, 1, NULL, 2, 2, "abcd", -2, -2, "abcd", -9, -9, NULL, 5, 5, "z");
    ret2 = printf("%d: %.*s, %d: %.*s, %d: %.*s, %d: %.*s, %d: %.*s\n", 1, 1, NULL, 2, 2, "abcd", -2, -2, "abcd", -9, -9, NULL, 5, 5, "z");
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
	ret = ft_printf("%.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", 0, 0, -1, 123, 0, 123, 1, 123, 2, 123, 3, 123, 4, 123, 10, 123, 20, 123, 100, 123, 11, 999999999999);
    ret2 = printf("%.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", 0, 0, -1, 123, 0, 123, 1, 123, 2, 123, 3, 123, 4, 123, 10, 123, 20, 123, 100, 123, 11, 999999999999);
	printf("%d\n%d\n\n", ret, ret2);
	printf("test %%d mixte:\n");
    ret = ft_printf("%-5.4d, %-4.4d, %-3.4d, %-2.4d, %-1.4d, %0.4d, %1.4d, %2.4d, %3.4d, %4.4d, %5.4d\n", 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135);
    ret2 = printf("%-5.4d, %-4.4d, %-3.4d, %-2.4d, %-1.4d, %0.4d, %1.4d, %2.4d, %3.4d, %4.4d, %5.4d\n", 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135);
    printf("%d\n%d\n\n", ret, ret2);
	ret = ft_printf("ft_printf: %.12d\n", 1144);
	ret2 = printf("printf: %.12d\n", 1144);
	printf("%d\n%d\n\n", ret, ret2);
	ret = ft_printf("%.--2d, \%.-2d, %.2d, %.-1d, %.-0d, %.0d, %.1d,\n", 1, 1, 1, 1, 1, 1, 1);
	ret2 = printf("%.--2d, \%.-2d, %.2d, %.-1d, %.-0d, %.0d, %.1d,\n", 1, 1, 1, 1, 1, 1, 1);
	printf("%d\n%d\n\n", ret, ret2);
	ret = ft_printf("%.0i\n", 0);
	ret2 = printf("%.0i\n", 0);
	printf("%d\n%d\n\n", ret, ret2);
	ret = ft_printf("%.--2d, \%.-2d, %.2d, %.-1d, %.-0d, %.0d, %.1d,\n", 0, 0, 0, 0, 0, 0, 0);
    ret2 = printf("%.--2d, \%.-2d, %.2d, %.-1d, %.-0d, %.0d, %.1d,\n", 0, 0, 0, 0, 0, 0, 0);
    printf("%d\n%d\n\n", ret, ret2);
    ret = ft_printf("%.0i\n", 0);
    ret2 = printf("%.0i\n", 0);
    printf("%d\n%d\n\n", ret, ret2);
	ret = ft_printf("%.--2d, \%.-2d, %.2d, %.-1d, %.-0d, %.0d, %.1d,\n", 100, 100, 100, 100, 100, 100, 100);
    ret2 = printf("%.--2d, \%.-2d, %.2d, %.-1d, %.-0d, %.0d, %.1d,\n", 100, 100, 100, 100, 100, 100, 100);
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
	ret = ft_printf("%.0x, %.0x, %.2x, %.5x, %.10x, %.20x\n", a, -10000000000, -10000000000, -10000000000, -10000000000, -10000000000);
	ret2 = printf("%.0x, %.0x, %.2x, %.5x, %.10x, %.20x\n", a, -10000000000, -10000000000, -10000000000, -10000000000, -10000000000);
	printf("%d\n%d\n\n", ret, ret2);

	printf("test %%X:\n");
    ret = ft_printf("%.0x, %.0X, %.2X, %.5X, %.10X, %.20X\n", a, -10000000000, -10000000000, -10000000000, -10000000000, -10000000000);
    ret2 = printf("%.0x, %.0X, %.2X, %.5X, %.10X, %.20X\n", a, -10000000000, -10000000000, -10000000000, -10000000000, -10000000000);
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
