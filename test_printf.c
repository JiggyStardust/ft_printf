#include "ft_printf.h"
#include <stdio.h>

#define WHITE "\e[1;97m";
#define RESET "\e[0m";

void	white_header(char *str)
{
	printf("\e[1;97m\n-----------------------------------------------\n");
	printf("%s", str);
	printf("\n-----------------------------------------------\n\e[0m");
}

void	strings_without_conversions()
{
	printf("\n\nft_printf: \n");
	printf("\nreturn value: %d", ft_printf("This is a test"));

	printf("\n\nprintf: \n");
	printf("\nreturn value: %d", printf("This is a test"));

	printf("\n\nft_printf: \n");
	printf("\nreturn value: %d", ft_printf(""));

	printf("\n\nprintf: \n");
	printf("\nreturn value: %d", printf(""));

	printf("\n\nft_printf: \n");
	printf("\nreturn value: %d", ft_printf(""));

	printf("\n\nprintf: \n");
	printf("\nreturn value: %d", printf(""));

	printf("\n\nft_printf: \n");
	printf("\nreturn value: %d", ft_printf("HeLLo TheRe?)_(*&*^!)"));

	printf("\n\nprintf: \n");
	printf("\nreturn value: %d", printf("HeLLo TheRe?)_(*&*^!)"));

		printf("\n\nft_printf: \n");
	printf("\nreturn value: %d", ft_printf("\n"));

	printf("\n\nprintf: \n");
	printf("\nreturn value: %d", printf("\n"));

		printf("\n\nft_printf: \n");
	printf("\nreturn value: %d", ft_printf("\n"));

	printf("\n\nprintf: \n");
	printf("\nreturn value: %d", printf("\n"));
}

void	premade_test()
{
	white_header("TEST 1:	Strings without conversions");


	strings_without_conversions();
}


int main(int ac, char **av)
{
	if (ac < 2)
	{
		premade_test();
	}
	(void)av;
	// else
	// {
	// 	argument_test(ac, av);
	// }
	return (0);
}