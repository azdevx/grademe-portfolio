int	gm_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
