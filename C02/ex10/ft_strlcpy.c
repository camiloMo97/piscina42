/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:18:14 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/25 09:51:44 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	leng;

	x = 0;
	leng = 0;
	while (src[x] != '\0' && x < size - 1)
	{
		dest[x] = src[x];
		x++;
		++leng;
	}
	while (src[leng] != '\0')
		++leng;
	dest[x] = '\0';
	return (leng);
}
