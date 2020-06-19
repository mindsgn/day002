/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_character.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 17:22:36 by stembe            #+#    #+#             */
/*   Updated: 2020/06/19 14:35:57 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(char letter){
	write(1,letter, 1);
}

void ft_print_character(void){
	char letter;
	letter='a'
	while(letter<='z'){
		ft_putchar(letter);		
		++letter;
	}
}

int main(){
	ft_print_character();
	return 0;
}
