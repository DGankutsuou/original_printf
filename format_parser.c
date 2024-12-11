#include "ft_printf.h"
#include "libft.h"

static void flags_assigner(t_data *data)
{
	char	flag;

	while (ft_strchr("-0# +", *(data->s)) && *(data->s))
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
	int	value;

	value = 0;
	while (ft_strchr("0123456789", *(data->s) && *(data->s)))
		value = value * 10 + *(data->s) - '0';
	data->format.precision = value;
}

static void conversion_assigner(t_data *data)
{
	if (ft_strchr("cspdiuxX%", *(data->s)) && *(data->s))
		data->format.conversion = *(data->s);
}

int	format_parser(t_data *data)
{
	ft_memset(&(data->format), 0, sizeof(t_format));
	data->format.precision = -1;
	flags_assigner(data);
	if (*(data->s) == '.' && *(++(data->s)))
		precision_assigner(data);
	conversion_assigner(data);
}