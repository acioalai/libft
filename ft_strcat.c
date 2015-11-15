/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 18:03:48 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/15 05:14:51 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	if (s1 && s2)
		ft_strcpy(&s1[ft_strlen(s1)], s2);
	return (s1);
}
