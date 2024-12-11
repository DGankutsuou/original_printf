#include "ft_printf.h"
#include "libft.h"

print_c(t_data *data, char c)
{
	
}

int	print(t_data *data)
{
	char	conversion;

	conversion = data->format.conversion;
	if (conversion == '%')
		return (ft_putchar_fd('%' ,1));
	if (conversion == 'c')
		return (print_c(data, va_arg(data->ap, int)));
	if (conversion == 's')
		return (print_c(data, va_arg(data->ap, char *)));
}