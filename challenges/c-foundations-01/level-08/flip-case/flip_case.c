#include <unistd.h>

void flip_case(char *str)
{
	int i = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			c -= 32;
		else if (c >= 'A' && c <= 'Z')
			c +=  32;
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		flip_case(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
