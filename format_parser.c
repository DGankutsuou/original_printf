#include "original_printf.h"
#include "libft.h"

int	format_parser(t_data *data)
{
	ft_memset(&(data->format), 0, sizeof(t_format));
	data->format.precision = -1;
	flags_assigner(&data);
	width_assigner(&data);
}