/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_character.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 17:22:36 by stembe            #+#    #+#             */
/*   Updated: 2020/06/19 17:26:41 by stembe           ###   ########.fr       */
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
