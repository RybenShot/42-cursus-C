/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:47:41 by sejimene          #+#    #+#             */
/*   Updated: 2024/03/08 17:54:29 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_print_char(char letra);
int		ft_print_digit(int digit);
int		ft_print_string(char *palabra);
int		ft_print_hex(unsigned long p, char format);
int		ft_print_unsig_digit(unsigned int digit);

#endif
