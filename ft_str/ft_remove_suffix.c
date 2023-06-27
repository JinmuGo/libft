/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_suffix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:45:11 by jgo               #+#    #+#             */
/*   Updated: 2023/06/27 22:37:02 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_remove_suffix(const char *origin)
{
	const size_t	origin_len = ft_strlen(origin);
	const size_t	suffix_len = ft_strlen(ft_strrchr(origin, '.'));

	return (ft_substr(origin, 0, origin_len - suffix_len));
}
