#include <unistd.h>

int is_exist(char *s ,int j)
{
	int i = 0;
	while (i < j)
	{
		if (s[i] == s[j])
			return (1);
		i++;
	}
	return (0);
}

void common_second_order(char *s1, char *s2)
{
	int i;
	int j;

	j = 0;
	while (s2[j])
	{
		i = 0;
		while (s1[i] != s2[j] && s1[i])
		{
			i++;
		}
		if (s1[i] == s2[j] && is_exist(s2, j) == 0)
		{
			write(1, &s2[j], 1);
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		common_second_order(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else 
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
