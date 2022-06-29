/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:29:38 by kada-sil          #+#    #+#             */
/*   Updated: 2022/06/09 16:23:13 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, '\0', n);
}

void	*ft_memset(void *s, int c, unsigned int len)
{
	size_t	i;
	char	*str2;

	i = 0;
	str2 = (char *)s;
	while (i < len)
	{
		str2[i] = (char)c;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*output;

	output = malloc(num * size);
	if (output == NULL)
		return (NULL);
	ft_bzero (output, num * size);
	return (output);
}
