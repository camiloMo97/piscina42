/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:05:12 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/24 16:35:37 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
			else if (str[x] >= 'A' && str[x] <= 'Z')
				y = 1;
			else
				return (0);
		x++;
		}
	}
	return (y);
}
