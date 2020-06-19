/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_character.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 17:22:36 by stembe            #+#    #+#             */
/*   Updated: 2020/06/19 15:17:58 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char letter){
	write(STDOUT_FILENO, &letter, 1);
}

void ft_print_alphabet(void){
	char letter;
	letter='a';
	while(letter<='z'){
		ft_putchar(letter);		
		++letter;
	}
}

int main(){
	ft_print_alphabet();
	return 0;
}
