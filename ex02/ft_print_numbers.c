/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:32:34 by stembe            #+#    #+#             */
/*   Updated: 2020/06/19 17:35:28 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putchar.c"

void ft_print_numbers(void){
	int number;
	number=0;
	while(number<=9){
		ft_putchar(number);		
		++number;
	}
}
