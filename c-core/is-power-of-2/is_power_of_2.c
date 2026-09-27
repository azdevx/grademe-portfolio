int is_power_of_2(unsigned int n)
{
	unsigned int x = 1;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	while (x != n && x <= n)
	{
		x = x * 2;
		if (x == n)
			return (1);
	}
	return (0);
}
