/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:24:51 by hmechich          #+#    #+#             */
/*   Updated: 2021/12/19 20:00:05 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void		ft_putchar(char c, int *base_len);
void		ft_putstr(char *s, int *base_len);
void		ft_putnbr(int n, int *base_len);
void		ft_putnbr_u(unsigned int n, int *base_len);
void		ft_putnbr_base_u(unsigned int n, char *base, int *len);
void		ft_putnbr_base_ul(unsigned long n, char *base, int *len);
void		ft_putnbr_base(int n, char *base, int *len);
size_t		ft_strlen(char *str);

#endif
