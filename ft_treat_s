
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:29:15 by kada-sil          #+#    #+#             */
/*   Updated: 2022/06/14 20:01:07 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_string(char *src)
{
	int	i;

	if (!src)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, src, ft_strlen(src));
	i = ft_strlen(src);
	return (i);
}

int	ft_number_size(unsigned long int n, int hex_or_dec, int i)
{
	unsigned long int	div;

	div = (unsigned long int)hex_or_dec;
	if (n < 0)
		n = n +1 * -1;
	while (n >= div)
	{
		n = n / div;
		i++;
	}
		i++;
	return (i);
}

char	*ft_treat_string(int i, unsigned int n)
{
	char	*temp;

	temp = ft_calloc(i, i + 1);
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	while (n > 0)
	{
		i--;
		temp[i] = 48 + (n % 10);
		n = n / 10;
	}
	return (temp);
}
