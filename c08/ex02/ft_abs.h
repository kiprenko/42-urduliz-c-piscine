/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 23:23:16 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/20 23:59:16 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS_CONDITION (condition, true_val, false_val) \
       	_Generic((0, condition), int: true_val, default: false_val)
# define ABS(Value) ABS_CONDITION(((Value) < 0), ((Value) * (-1)) : (Value))
#endif
