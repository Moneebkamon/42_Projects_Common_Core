#include "ft_printf.h"
#include <stdarg.h>

static void handle_format(char format, va_list args)
{
	size_t	count;

	count = 0;
	if(format == 'c')
		count += ft_putchar_fd(va_arg(args, int), 1);
	else if(format == 's')
		count += ft_putstr_fd(va_arg(args, char *), 1);
	else if(format == 'd')
		count += ft_putnbr_fd(va_arg(args, int), 1);
	else if(format == 'i')
		count += ft_putnbr_fd(va_arg(args, int), 1);
	else if(format == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if(format == 'p')
		count += ft_putaddress(va_arg(args, void *));
	else if(format == 'x')
		count += ft_puthex(va_arg(args, unsigned int));
	else if(format == 'X')
		count += ft_puthex_upper(va_arg(args, unsigned int));
	return (count);
}

int ft_printf(const char *pt, ...)
{
    va_list lst;
    size_t	i;
	size_t	count;

    va_start(lst, pt);
	i = 0;
	count = 0;
	while (pt[i] != '\0')
	{
		if(pt[i] == '%')
		{
			i++;
			count += handle_format(pt[i], lst);
		}
		else
		{
			ft_putchar_fd(pt[i], 1);
			count++;
		}
		i++;
	}
	va_end(lst);
	return (count);
}
