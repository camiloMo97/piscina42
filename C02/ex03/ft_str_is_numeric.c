/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:07:03 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/20 18:14:54 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (*str == '\0')
		return (1);
	else
	{
		while (str[x] != '\0')
		{
			if (str[x] >= '0' && str[x] <= '9')
				y = 1;
			else
				return (0);
			x++;
		}
	}
	return (y);
}
