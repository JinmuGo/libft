/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:51:06 by jgo               #+#    #+#             */
/*   Updated: 2023/06/18 12:00:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * return a random in [0, 1]
 * double type
 * 
 * @return double 
 */
double	ft_random_double(void)
{
	return (ft_rand() / (FT_RAND_MAX + 1.0));
}

/**
 * @brief 
 * return a random in [min, max]
 * double type
 * 
 * @param min 
 * @param max 
 * @return double 
 */
double	ft_random_double_range(const double min, const double max)
{
	return (min + (max - min) * ft_random_double());
}

/**
 * @brief 
 * return a random in [min, max]
 * int type
 * 
 * @param min 
 * @param max 
 * @return int 
 */
int	ft_random_int_range(const int min, const int max)
{
	return (min + ft_rand() % (max - min));
}
