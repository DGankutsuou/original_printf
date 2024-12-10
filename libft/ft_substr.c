/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:53:01 by aabouriz          #+#    #+#             */
/*   Updated: 2024/12/10 19:05:08 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s1, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;

	s_len = ft_strlen (s);
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup (""));
	if (len > s_len - start)
		len = s_len - start;
	return (ft_strndup(&(s[start]), len));
}
// int	main(void)
// {
// 	char	*ptr;
// 	char	*sup;

// 	ptr = "kjhkjhkj";
// 	sup = ft_substr(ptr, 1, 3);
// 	printf ("%s\n", sup);
// 	return (0);
// }
