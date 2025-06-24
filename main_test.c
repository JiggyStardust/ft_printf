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
	printf("\nreturn value: %d", ft_printf("HeLLo TheRe?)_(*&*^!)"));

	printf("\n\nprintf: \n");
	printf("\nreturn value: %d", printf("HeLLo TheRe?)_(*&*^!)"));

	printf("\n\nft_printf: \n");
	printf("\nreturn value: %d", ft_printf("''''jou'\""));

	printf("\n\nprintf: \n");
	printf("\nreturn value: %d", printf("''''jou'\""));

	printf("\n\nft_printf: \n");
	printf("\nreturn value: %d", ft_printf("Wouldn't it be nice if we were older?\nThen we wouldn't have to wait so long\nAnd wouldn't it be nice to live together\nIn the kind of world where we belong?\nYou know it's gonna make it that much better\nWhen we can say goodnight and stay together\nWouldn't it be nice if we could wake up\nIn the morning when the day is new?\nAnd after having spent the day together\nHold each other close the whole night through\nHappy times together we've been spending\nI wish that every kiss was never ending\nOh, wouldn't it be nice?"));

	printf("\n\nprintf: \n");
	printf("\nreturn value: %d", printf("Wouldn't it be nice if we were older?\nThen we wouldn't have to wait so long\nAnd wouldn't it be nice to live together\nIn the kind of world where we belong?\nYou know it's gonna make it that much better\nWhen we can say goodnight and stay together\nWouldn't it be nice if we could wake up\nIn the morning when the day is new?\nAnd after having spent the day together\nHold each other close the whole night through\nHappy times together we've been spending\nI wish that every kiss was never ending\nOh, wouldn't it be nice?"));
}

void	premade_test()
{
	white_header("TEST 1:	Strings without conversions");
	strings_without_conversions();
	white_header("TEST 2:	String conversions");
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