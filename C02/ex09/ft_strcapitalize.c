/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42urduliz.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:13:12 by emunoz            #+#    #+#             */
/*   Updated: 2022/10/24 13:27:06 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphanum(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	if (str >= 'A' && str <= 'Z')
		return (2);
	if (str >= 'a' && str <= 'z')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	prev;

	i = 0;
	prev = '!';
	while (str[i] != '\0')
	{
		if (ft_alphanum(str[i]) == 3 && ft_alphanum(prev) == 0)
		{
			str[i] = str[i] - 32;
		}
		if (ft_alphanum(str[i]) == 2 && ft_alphanum(prev) >= 1)
		{
			str[i] = str[i] + 32;
		}
		prev = str[i];
		i++;
	}
	return (str);
}
