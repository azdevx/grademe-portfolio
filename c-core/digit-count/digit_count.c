// Count the decimal digits of n, sign excluded, with zero written as one digit.
// Never negate n: INT_MIN has no positive counterpart inside an int.
int	digit_count(int n)
{
	int i;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (10);
	if (n < 0)
		n = -n;
	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
