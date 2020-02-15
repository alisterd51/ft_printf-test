/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_padding.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 20:32:29 by anclarma          #+#    #+#             */
/*   Updated: 2020/02/15 10:55:03 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main(int ac, char **av)
{
	int ret, ret2;
	int	test;
	void *a = NULL, *b = (void *)0x1028ddf89, *c = (void *)0x0028ddf89,
		 *d = (void *)0xff102df89;

	printf("Debut des test:\n\n");
	printf("test %%c:\n");
	ret2 = ft_printf("%c, %0c, %-1c, %1c, %-0c, %-2c, %2c, %2c\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 0);
	ret = printf("%c, %0c, %-1c, %1c, %-0c, %-2c, %2c, %2c\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 0);
	printf("%d\n", ret2);
	printf("%d\n\n", ret);

	printf("test %%s:\n");
    ret2 = ft_printf("%s, %0s, %-1s, %1s, %-0s, %-2s, %2s, %2s, %2s\n", "a", "b", "c", "d", "e", "f", "g", "", NULL);
    ret = printf("%s, %0s, %-1s, %1s, %-0s, %-2s, %2s, %2s, %2s\n", "a", "b", "c", "d", "e", "f", "g", "", NULL);
    printf("%d\n", ret2);
    printf("%d\n\n", ret);
	ret2 = ft_printf("%c, %-5c\n", 0, 0);
	ret = printf("%c, %-5c\n", 0, 0);
	printf("%d\n", ret2);
    printf("%d\n\n", ret);

	printf("test %%d:\n");
	ret2 = ft_printf("%-5d, %-4d, %-3d, %-2d, %-1d, %0d, %1d, %2d, %3d, %4d, %5d\n", 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135);
	ret = printf("%-5d, %-4d, %-3d, %-2d, %-1d, %0d, %1d, %2d, %3d, %4d, %5d\n", 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135);
	printf("%d\n%d\n\n", ret2, ret);

	printf("test %%d mixte:\n");
	ret2 = ft_printf("%-5.4d, %-4.4d, %-3.4d, %-2.4d, %-1.4d, %0.4d, %1.4d, %2.4d, %3.4d, %4.4d, %5.4d\n", 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135);
    ret = printf("%-5.4d, %-4.4d, %-3.4d, %-2.4d, %-1.4d, %0.4d, %1.4d, %2.4d, %3.4d, %4.4d, %5.4d\n", 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135);
    printf("%d\n%d\n\n", ret2, ret);

	printf("test %%c mixte:\n");
	ret2 = ft_printf("%1.1c, %1.1c\n", 0, 'a');
    ret = printf("%1.1c, %1.1c\n", 0, 'a');
    printf("%d\n", ret2);
    printf("%d\n\n", ret);
	ret2 = ft_printf("%2.2c, %2.2c\n", 0, 'a');
    ret = printf("%2.2c, %2.2c\n", 0, 'a');
    printf("%d\n", ret2);
    printf("%d\n\n", ret);
	ret2 = ft_printf("%-2.2c, %-2.2c\n", 0, 'a');
    ret = printf("%-2.2c, %-2.2c\n", 0, 'a');
    printf("%d\n", ret2);
    printf("%d\n\n", ret);
	ret2 = ft_printf("%3.-5c, %3.-5c\n", 0, 'a');
    ret = printf("%3.-5c, %3.-5c\n", 0, 'a');
    printf("%d\n", ret2);
    printf("%d\n\n", ret);
	ret2 = ft_printf("%-5.-3c, %-5.-3c\n", 0, 'a');
    ret = printf("%-5.-3c, %-5.-3c\n", 0, 'a');
    printf("%d\n", ret2);
    printf("%d\n\n", ret);
}
