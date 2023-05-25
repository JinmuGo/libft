/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:09:27 by jgo               #+#    #+#             */
/*   Updated: 2023/05/25 15:35:04 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ASCII_H
# define FT_ASCII_H

# include "libft_include.h"

int		ft_add_all_ascii(const char *str);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif