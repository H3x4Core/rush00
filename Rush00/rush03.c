void	ft_putchar(char c);

char	*ft_charset(char *charset)
{
	charset[0] = 'A';
	charset[1] = 'B';
	charset[2] = 'C';
	charset[3] = 'B';
	charset[4] = ' ';
	charset[5] = 'A';
	charset[6] = 'B';
	charset[7] = 'C';
	return (charset);
}

void	ft_line(int x, char left, char center, char right)
{
	int	i;

	i = 0;
	ft_putchar(left);
	while (i++ < (x - 2))
		ft_putchar(center);
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;
	char	set[8];

	i = 0;
	if (x < 1 || y < 1)
		return ;
	ft_charset(set);
	ft_line(x, set[0], set[1], set[2]);
	while (i++ < (y - 2))
		ft_line(x, set[3], set[4], set[3]);
	if (y > 1)
		ft_line(x, set[5], set[6], set[7]);
}
