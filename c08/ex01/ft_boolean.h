/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:41:00 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/22 19:19:59 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

typedef int	t_bool;
# define EVEN_MSG "I have an even number of arguments.\n" 
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define EVEN(n) ((n) % 2 == 0)
#endif
