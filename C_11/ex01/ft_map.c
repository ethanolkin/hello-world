#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int n;
	int *p;
	int *m;

	m = (int *)malloc(length);
	if (m == NULL)
		return (NULL);
	p = m;
	n = 0;
	while (n < length)
	{
		*m = f(*tab);
		tab++;
		m++;
		n++;
	}
	return (p);
}
