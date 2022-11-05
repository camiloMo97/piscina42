/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:10:43 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/20 18:20:12 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find);

int main(void)
{
    char string[] = "Hola mundo";
    char to_find[] = "la mun";
    char *res;
    res = ft_strstr(string,to_find);
    printf("%s\n", res);
    return (0);
}
