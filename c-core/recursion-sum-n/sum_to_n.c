// Return the sum of the integers from 1 to n, with sum_to_n(0) equal to 0.
// A negative n is invalid: return -1.
int	sum_to_n(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (n + sum_to_n(n - 1));
}
