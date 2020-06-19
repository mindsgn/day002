/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_character.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 17:22:36 by stembe            #+#    #+#             */
/*   Updated: 2020/06/19 17:01:11 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_putchar.c"

void ft_print_alphabet(void){
	char letter;
	letter='a';
	while(letter<='z'){
		ft_putchar(letter);		
		++letter;
	}
}
