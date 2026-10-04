// clamp must return v held inside lo and hi, and lo when the bounds are inverted.
// This file does not build yet: three diagnostics, clear them one at a time.
int	clamp(int v, int lo, int hi)
{
	if (lo > hi)
		return (lo);
	if (v >= lo && v <= hi)
		return (v);
	if (v < lo)
		return (lo);
	if (v > hi)
		return (hi);
	return (0);
}