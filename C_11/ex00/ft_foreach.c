void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int n;

	n = 0;
	while (n < length)
	{
		f(*tab);
		tab++;
		n++;
	}
}
