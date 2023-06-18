/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_include.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:10:25 by jgo               #+#    #+#             */
/*   Updated: 2023/06/18 11:38:29 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_INCLUDE_H
# define LIBFT_INCLUDE_H

/*------------- INCLUDE --------------*/
# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

/*------------- TYPEDEF --------------*/
typedef struct s_list	t_list;
typedef enum e_accessor	t_accessor;

/*-------------- STRUCT --------------*/
struct					s_list
{
	void				*content;
	struct s_list		*next;
};

/*-------------- CONST --------------*/

# define FT_RAND_MAX 32767

/*-------------- CONST --------------*/

enum					e_accessor
{
	GET,
	SET
};

#endif