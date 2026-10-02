#include <limits.h>

// Return 1 when value can be stored in an int without changing,
// 0 when the conversion would lose information.
int	fits_in_int(long value)
{
	if (value >= INT_MIN && value <= INT_MAX)
		return (1);
	return (0);
}
