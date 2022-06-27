/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:29:38 by kada-sil          #+#    #+#             */
/*   Updated: 2022/06/09 16:23:13 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cc;

	str = (char *)s;
	cc = (char)c;
	while (*str)
	{
		if (*str == (c % 256))
			return (str);
		str++;
	}
	if (cc == '\0' && *str == '\0')
		return (str);
	return (NULL);
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
