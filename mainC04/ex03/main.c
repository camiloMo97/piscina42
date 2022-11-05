/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:10:43 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/27 13:03:49 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_atoi(char *str);

int main(void)
{
    int atoi;
    
    //atoi = ft_atoi("  ---+--+1234ab567");
	atoi = ft_atoi("215482482");
    printf("%d\n", atoi);
}
