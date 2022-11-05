/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:03:18 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/20 11:03:21 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char *s1 = "hola buen";
    char *s2 = "hola buenos";
	int x;
	x = ft_strcmp(s1, s2);
	printf("%d\n",x);
}