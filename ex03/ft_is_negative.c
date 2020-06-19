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

void ft_is_negative(int n){
	if(n)
}

int main(){
	ft_is_negative(1);
	return 0;
}
