/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:15:27 by jgo               #+#    #+#             */
/*   Updated: 2023/06/18 12:00:33 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include "libft_include.h"

int		ft_find_next_prime(int nb);
int		ft_find_prev_prime(int nb);
int		ft_rand(void);
void	ft_srand(unsigned long seed);
double	ft_random_double(void);
double	ft_random_double_range(const double min, const double max);
int		ft_random_int_range(const int min, const int max);

#endif