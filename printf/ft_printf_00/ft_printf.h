/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:36:29 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/14 17:09:13 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_pointer(unsigned long n);
int		ft_printf(const char *str, ...);
int		ft_dgtlen(int i);
int		ft_un_dgtlen(unsigned int i);
int		ft_l_hex(unsigned int i);
int		ft_u_hex(unsigned int i);

#endif