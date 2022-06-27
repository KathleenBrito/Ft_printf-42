
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:21:39 by kada-sil          #+#    #+#             */
/*   Updated: 2022/06/14 20:23:49 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void				    *ft_memset(void *s, int c, unsigned int len);
void				    ft_bzero(void *s, size_t n);
void				    *ft_calloc(size_t num, size_t size);
void				    ft_putchar_fd(char c, int fd);
int					    ft_check_neg(int number);
int					    confer(const char *src, int i);
int					    ft_isascii(int c);
int					    ft_printf(const char *src, ...);
int					    ft_get_pointer(void *pointer);
int					    ft_number_size(unsigned long int n, int hex_or_dec, int i);
int					    ft_treat2(char character, va_list argument);
int					    ft_treat_src(const char *src, char c, va_list argument);
int					    ft_get_char(int number);
int					    ft_get_int(int number);
int					    ft_get_string(char *src);
int					    ft_treat_pointer(unsigned long int number, int i);
char				    *ft_strchr(const char *s, int c);
char				    *ft_treat_string(int i, unsigned int n);
unsigned int		ft_treat_x(unsigned int number, int i, int count);
unsigned int		ft_treat_lower(unsigned int number);
unsigned int		ft_treat_upper(unsigned int number);
unsigned int		ft_get_unsigned(unsigned int number);
unsigned int		ft_strlen(const char *str);

#endif
