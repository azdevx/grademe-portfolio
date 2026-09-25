#include <unistd.h>

void shift_alpha(char *str)
{
	int  i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
		{
			if (c == 'Z')
				c = 'A';
			else 
				c++;
		}
		else if (c >= 'a' && c <= 'z')
		{
			if (c == 'z')
				c = 'a';
			else 
				c++;
		}
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		shift_alpha(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
