#include <unistd.h>

void putnbr(int n)
{
	char c;

	if (n >= 10)
		putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int i = 1;
	while ( i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "FizzBuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "Fizz\n", 5);
		else if (i % 5 == 0)
		{
			write(1, "Buzz\n", 5);
		} 
		else
		{
			putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
