/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:48:42 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/18 10:41:30 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *to_compare1;
	unsigned const char *to_compare2;
	size_t				i;

	to_compare1 = s1;
	to_compare2 = s2;
	i = 0;
	while (i < n)
	{
		if (to_compare1[i] != to_compare2[i])
		{
			return (to_compare1[i] - to_compare2[i]);
		}
		i++;
	}
	return (0);
}
