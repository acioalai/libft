/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 15:10:30 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/04 08:08:24 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		c = c - 32;
	return (c);
}
