/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 07:29:17 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/07 06:08:57 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
/*	char *s1,*s2;

	strcpy(s1,"abc");
	strcpy(s2,"abc");
	printf("%d", ft_strequ(s1,s2));	
*/
	void	*str;
	puts(ft_memchr("abcdef",'a' , 5));
	
	puts(memchr("abcdef",'a' , 5));
/*	
	char	*s;
	ft_memmove(s, "acasa", 2);
	puts(s);	
	puts(memmove(s, "acasa", 2));
	return (0);
*/
}