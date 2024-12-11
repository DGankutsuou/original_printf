#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *format, ...)
{
	t_data	data;

	va_start(data.ap, format);
	data.chars_written = 0;
	data.s = format;
	while (*(data.s))
	{
		if (*(data.s) == '%' && *(++(data.s)))
		{
			if (format_parser(&data))
				return (-1);
			format_render();
		}
		else
			data.chars_written += ft_putchar_fd(*(data.s), 1);
		++(data.s);
	}
	return (data.chars_written);
}