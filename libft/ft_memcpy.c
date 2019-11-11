/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:12:04 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/25 17:15:19 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*copy_to;
	const char	*to_copy;

	copy_to = dst;
	to_copy = src;
	if (src == dst)
	{
		return ((char *)src);
	}
	while (n)
	{
		*copy_to++ = *to_copy++;
		n--;
	}
	return (dst);
}
