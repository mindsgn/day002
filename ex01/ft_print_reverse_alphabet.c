#include <stdio.h>
#include <string.h>
#include <unistd.h>
/*
* print the alphabet in ascending order, in lowercase, on the same line.
*/

/*
*my notes
* ft_putchar
* write
*/

void ft_putchar(char letter){
	write(STDOUT_FILENO, &letter, 1);
}

void ft_print_alphabet(void){
	char letter;
	for(letter='z'; letter>='a';--letter){
		ft_putchar(letter);
	}
}

int main(){
	ft_print_alphabet();
	return 0;
}
