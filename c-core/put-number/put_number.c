#include <unistd.h>

// Print n in decimal on standard output, with no newline.
// n is between 0 and INT_MAX.
void	put_number(int n)
{
	char c;
	if (n < 0)
		return ;
	if (n >= 10)
		put_number(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}
