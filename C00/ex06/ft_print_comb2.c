#include <unistd.h>

void	ft_putchar(int num)
{
	char	c;	
	char	d;
	int		aux1;
	int		aux2;

	aux1 = num / 10;
	c = aux1 + '0';
	write(1, &c, 1);
	aux2 = num % 10;
	d = aux2 + '0';
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x);
			write(1, " ", 1);
			ft_putchar(y);
			if (!(x == 98))
				write(1, ",", 1);
			if (!(x == 98))
				write(1, " ", 1);
			++y;
		}
		++x;
	}
}
