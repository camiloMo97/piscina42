/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:09:24 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/26 18:23:38 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	ft_leng_base(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

int	check_base(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_leng_base(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= ' ' || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_leng_base(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	leng_base;
	int	error_base;

	error_base = check_base(base);
	leng_base = ft_leng_base(base);
	if (error_base == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		if (nbr < leng_base)
		{
			ft_putchar(base[nbr]);
		}
		if (nbr >= leng_base)
		{
			ft_putnbr_base(nbr / leng_base, base);
			ft_putnbr_base(nbr % leng_base, base);
		}
	}
}
