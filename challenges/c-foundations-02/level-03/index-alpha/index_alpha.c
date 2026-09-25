#include <unistd.h>

void index_alpha(char *str)
{
	int i;
	int r;
	char c;

	i = 0;
	r = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
		{
			r = c - 'A';
		}
		else if (c >= 'a' && c <= 'z')
			r = c - 'a';
		else
		{
			write(1, &c, 1);
			r = 0;
		}
		while (r > 0)
		{
			write(1, &c, 1);
			r--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		index_alpha(argv[1]);
		write(1, "\n", 1);
	}	
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
