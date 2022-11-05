/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:21:11 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/26 10:02:42 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	lengt;
	unsigned int	y;

	x = 0;
	lengt = 0;
	y = 0;
	while (dest[lengt] != '\0')
		++lengt;
	while (src[x] != '\0' && x < size)
	{
		dest[lengt + x] = src[x];
		++x;
	}
	dest[x + lengt] = '\0';
	while (src[y] != '\0')
		y++;
	return (y + size);
}
