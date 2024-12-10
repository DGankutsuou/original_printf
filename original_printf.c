#include "original_printf.h"

int	assign_data(t_data *data, const char *format)
{
	data->chars_written = 0;
	data->s = format;
	data->buffer;
}

int	original_printf(const char *format, ...)
{
	t_data	data;

	va_start(data.ap, format);
	if (assign_data(&data, format))
		return (-1);
		// while
}