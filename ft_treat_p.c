/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:49:54 by kada-sil          #+#    #+#             */
/*   Updated: 2022/06/14 20:25:03 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_pointer(void *pointer)
{
	long int		number;
	int				i;

	i = 0;
	number = ((long int)pointer);
	if (number == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}	
	i = ft_number_size(number, 16, i);
	i = ft_treat_pointer(number, i);
	return (i);
}

int	ft_treat_pointer(unsigned long int number, int i)
{
	char	*src;

	src = ft_calloc(i, i + 1);
	while (i != 0)
	{
		i--;
		if ((number % 16) > 9)
			src[i] = 87 + (number % 16);
		else
			src[i] = 48 + (number % 16);
		number = number / 16;
	}
	i--;
	if (i == 0)
		src[i] = 48 + (number % 16);
	if (src[0] == '(')
		src[0] = '8';
	write(1, "0x", 2);
	write(1, src, ft_strlen(src));
	i = ft_strlen(src);
	free(src);
	return (i + 2);
}
