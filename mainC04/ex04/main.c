/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:10:43 by jumoncad          #+#    #+#             */
/*   Updated: 2022/10/27 13:00:49 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{

    ft_putnbr_base(-12, "01");
    printf("\n");
    ft_putnbr_base(40, "poniguay");
    printf("\n");
    ft_putnbr_base(894867, "0123456789");
    printf("\n");
    ft_putnbr_base(53, "0123456789abcdef");
    return 0;
}
