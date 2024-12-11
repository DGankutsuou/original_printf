#include "ft_printf.h"
#include "libft.h"

static flags_assigner(t_data *data)
{
	char	flag;

	while (ft_strchr(FLAGS, *(data->s)))
	{
		flag = *(data->s);
		if (flag == '-')
			data->format.minus = 1;
		else if (flag == '0')
			data->format.zero = 1;
		else if (flag == '#')
			data->format.sharp = 1;
		else if (flag == ' ')
			data->format.space = 1;
		else if (flag == '+')
			data->format.plus = 1;
		(data->s)++;
	}
}

static void	precision_assigner(t_data *data)
{
	
}

int	format_parser(t_data *data)
{
	ft_memset(&(data->format), 0, sizeof(t_format));
	data->format.precision = -1;
	flags_assigner(data);
	if (*(data->s) == '.' && *(++(data->s)))
		precision_assigner(data);
}