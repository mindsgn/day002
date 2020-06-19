/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:42:32 by stembe            #+#    #+#             */
/*   Updated: 2020/06/19 17:42:39 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include "ft_putchar.c"

void ft_print_reverse_alphabet(void){
	char letter;
	letter='z';
	while(letter<='a'){
		ft_putchar(letter);		
		--letter;
	}
}
