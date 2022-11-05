/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:53:20 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/24 12:29:53 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_conver_hexa(char x)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[x / 16]);
	ft_putchar(hex[x % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 0 && str[x] <= 31) || str[x] == 127)
			ft_conver_hexa(str[x]);
		else
			ft_putchar(str[x]);
		x++;
	}
}
