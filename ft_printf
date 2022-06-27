/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:29:21 by kada-sil          #+#    #+#             */
/*   Updated: 2022/06/10 22:39:52 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *source, ...)
{
	char	character;
	va_list	argument;
	int		size;

	size = 0;
	character = 'a';
	if (!source)
		return (0);
	va_start(argument, source);
	size = ft_treat_src(source, character, argument);
	va_end(argument);
	return (size);
}

int	ft_treat_src(const char *src, char c, va_list argument)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == '%')
		{
			i++;
			i = confer(src, i);
			c = src[i];
			size += ft_treat2(c, argument);
		}
		else
		{
			c = src[i];
			ft_putchar_fd(c, 1);
			size++;
		}
		i++;
	}
	return (size);
}

int	confer(const char *src, int i)
{
	char	c;

	c = 'a';
	while (src[i] != '\0')
	{
		if (ft_strchr("cspudixX%", src[i]))
			return (i);
		else
		{
			c = src[i];
			ft_putchar_fd(c, 1);
		}
	i++;
	}
	return (i);
}

int	ft_treat2(char character, va_list argument)
{
	int	size;

	size = 0;
	if (character == 'x')
		size = ft_treat_lower(va_arg(argument, unsigned int));
	else if (character == 'X')
		size = ft_treat_upper(va_arg(argument, unsigned int));
	else if (character == 'p')
		size = ft_get_pointer(va_arg(argument, void *));
	else if (character == 'c')
		size = ft_get_char(va_arg(argument, int));
	else if (character == 'i' || character == 'd')
		size = ft_get_int(va_arg(argument, int));
	else if (character == 's')
		size = ft_get_string(va_arg(argument, char *));
	else if (character == 'u')
		size = ft_get_unsigned(va_arg(argument, unsigned int));
	else
	{
		ft_putchar_fd(character, 1);
		size = 1;
	}
	return (size);
}
