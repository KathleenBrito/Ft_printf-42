/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:56:25 by kada-sil          #+#    #+#             */
/*   Updated: 2022/06/09 17:07:51 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned	int	ft_treat_upper(unsigned int number)
{
	int		i;
	int		count;

	i = 0;
	if (number == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	count = 55;
	i = ft_treat_x(number, i, count);
	return (i);
}

unsigned	int	ft_treat_lower(unsigned int number)
{
	int		i;
	int		count;

	i = 0;
	if (number == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	count = 87;
	i = ft_treat_x(number, i, count);
	return (i);
}

unsigned int	ft_treat_x(unsigned int number, int i, int count)
{
	char			*string;

	i = ft_number_size(number, 16, i);
	string = ft_calloc(i, i + 1);
	while (number > 0)
	{
		i--;
		if ((number % 16) > 9)
			string[i] = count + (number % 16);
		else
			string[i] = 48 + (number % 16);
		number = number / 16;
	}
	write(1, string, ft_strlen(string));
	i = ft_strlen(string);
	free(string);
	return (i);
}
