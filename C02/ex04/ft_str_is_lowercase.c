/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:18:28 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/20 18:20:44 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
			if (str[x] >= 'a' && str[x] <= 'z')
				y = 1;
			else
				return (0);
			x++;
		}
	}
	return (y);
}
