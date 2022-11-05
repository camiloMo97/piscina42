/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:10:43 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/24 14:58:58 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[20] = "hola";
    char src[20] = " mundo";

    ft_strcat(dest,src);
    printf("%s\n", dest);
}
