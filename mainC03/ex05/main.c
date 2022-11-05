/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:10:43 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/21 11:08:53 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	const char src1[10]	= "ab";
	char dest1[10]   = "123";

	char src[10]	= "ab";
	char dest[10]	= "123";

	size_t 			nb = 2;
	unsigned int 	nb2 = 3;
	printf("Str: %ld \n", strlcat(dest1, src1, nb));
	printf("Str: %u", ft_strlcat(dest, src, nb2));
	return (0);
}
