#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE (1<<10)
# endif

# ifndef FLAGS
#  define FLAGS "-0# +"
# endif

typedef struct s_format
{
	char	minus; // hyphen
	char	zero;
	char	sharp; // hash
	char	space;
	char	plus;
	int		precision; // period
	char	specifier;
}	t_format;

typedef struct s_data
{
	va_list		ap;
	const char	*s;
	int			chars_written;
	t_format	format;
}	t_data;

int		ft_printf(const char *format, ...);
void	*ft_calloc(size_t nmemb, size_t size);

#endif