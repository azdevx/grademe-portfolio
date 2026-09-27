#include <unistd.h>

void 	print_nbr(int n)
{
	char c;

	if (n > 9)
		print_nbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;

	print_nbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
