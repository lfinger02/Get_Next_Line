/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 10:13:17 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/18 10:41:10 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*copy_to;
	unsigned char	*to_copy;

	copy_to = (unsigned char*)dst;
	to_copy = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		copy_to[i] = to_copy[i];
		if (copy_to[i] == (unsigned char)c)
		{
			return ((void*)(dst + i + 1));
		}
		i++;
	}
	return (NULL);
}
