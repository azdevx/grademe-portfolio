// Return the absolute value of n as a long.
// Widen to long before negating, never after.
long	abs_safe(int n)
{
	long ln = n;

	if (n < 0)
	{
		return (-ln);
	}
	else
		return (n);
}
