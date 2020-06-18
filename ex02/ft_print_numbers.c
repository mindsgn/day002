#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*
* print the alphabet in ascending order, in lowercase, on the same line.
*/

/*
*my notes
* ft_putchar - 
* write - 
*/

void ft_putchar(char letter){
	write(STDOUT_FILENO, &letter, 1);
}

void ft_print_numbers(void){
	int number;
	for(number=0; number<=9;++number){
		//convert integer to character
		//char convert = number;
		//printf("%d", number);
		ft_putchar(number);
	}
}

int main(){
	ft_print_numbers();
	return 0;
}
