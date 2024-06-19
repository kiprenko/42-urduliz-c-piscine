/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:41:00 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/19 21:33:50 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_BOOL_H
# define T_BOOL_H

# include <unistd.h>

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

typedef int	t_bool;
# define EVEN_MSG "I have an even number of arguments." 
# define ODD_MSG "I have an odd number of arguments."
# define SUCCESS 0
# define EVEN(n) ((n) % 2 == 0)
#endif
