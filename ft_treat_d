/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:05:51 by kada-sil          #+#    #+#             */
/*   Updated: 2022/06/14 20:23:36 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_int(int number)
{
	int		temp;
	int		i;
	char	*string;

	string = NULL;
	temp = number;
	i = 0;
	if (number == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	number = ft_check_neg(number);
	if (temp < 0)
		i++;
	i = ft_number_size(number, 10, i);
	string = ft_treat_string(i, number);
	if (temp < 0)
		string[0] = '-';
	if (temp == -2147483648)
		string[10] = '8';
	write(1, string, ft_strlen(string));
	i = ft_strlen(string);
	free(string);
	return (i);
}

int	ft_check_neg(int number)
{
	if (number < 0)
	{
		if (number == -2147483648)
			number = -2147483647;
		number = number * -1;
	}
	return (number);
}	

unsigned int	ft_get_unsigned(unsigned int number)
{
	unsigned int	i;
	char			*string;

	i = 0;
	if (number == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	i = ft_number_size(number, 10, i);
	string = ft_treat_string(i, number);
	write(1, string, ft_strlen(string));
	i = ft_strlen(string);
	free(string);
	return (i);
}
