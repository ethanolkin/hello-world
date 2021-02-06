#include <stdio.h>
void	rush(int x, int y);
int		main()
{
	rush(4, 6);
	return (0);
}

void	rush(int x, int y)
{
	int a, b, help;
	a=x;
	b=y;
	help=y-2;
	if( x > 0 && y > 0 )
	{
		if (x!=1 && y!=1)
		{
			putchar('o');
			while((x-2)>=1)
			{	
				putchar('-');
				x--;
			}
			x=a;
			y=b;
			putchar('o');	
			putchar('\n');
			while(help>=1)
			{
				putchar('|');
				while((x-2)>=1)
				{	
					putchar(' ');
					x--;
				}
				x=a;
				putchar('|');
				putchar('\n');
				help--;
			}
			putchar('o');
			while((x-2)>=1)
			{
				putchar('-');
				x--;
			}
			x=a;
			y=b;
			putchar('o');
			
		}
		else
		{
			if (x==1 && y ==1)
				putchar('o');
			else
			{
				if (x>y)
				{
					putchar('o');
					while((x-2)>=1)
					{
						putchar('-');
						x--;
					}
					putchar('o');
				}
				else
				{
					putchar('o');
					putchar('\n');
					while((y-2)>=1)
					{
						putchar('|');
						putchar('\n');
						y--;
					}
					putchar('o');
				}
			}
		}
	}
}
