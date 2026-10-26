#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	char	c;
	int	count;

	count = 0;
	if (n == 0)
		write(1, "0", 1);
	else if (n > 9)
		count +=ft_putnbr_unsigned(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
    return (count + 1);
}
