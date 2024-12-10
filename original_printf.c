#include "original_printf.h"
#include "libft.h"

static int	data_assigner(t_data *data, const char *format)
{
	data->chars_written = 0;
	data->s = format;
	data->buffer = ft_calloc (BUFFER_SIZE, sizeof(char));
	if (!data->buffer)
		return (-1);
	data->bf_iterator = 0;
	return (0);
}

int	original_printf(const char *format, ...)
{
	t_data	data;

	va_start(data.ap, format);
	if (data_assigner(&data, format))
		return (-1);
	while (*(data.s))
	{
		if (*(data.s) == '%' && *(++(data.s)))
		{
			if (format_parser(&data))
				return (-1);
			format_render();
		}
		else
			buffering(&data);
		++(data.s);
	}
	flush(&data);
	va_end(data.ap);
	free(data.buffer);
	return (data.chars_written);
}