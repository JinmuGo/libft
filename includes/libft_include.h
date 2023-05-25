/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_include.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:10:25 by jgo               #+#    #+#             */
/*   Updated: 2023/05/25 15:10:46 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_INCLUDE_H
# define LIBFT_INCLUDE_H

/*------------- INCLUDE --------------*/
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>

/*------------- TYPEDEF --------------*/
typedef struct s_list	t_list;

/*-------------- STRUCT --------------*/
struct s_list
{
	void			*content;
	struct s_list	*next;
};

#endif