/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:53:49 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/18 10:41:47 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*to_move;
	char	*move_to;
	size_t	i;

	i = 0;
	to_move = (char *)src;
	move_to = (char *)dst;
	if (to_move == move_to)
		return ((char *)to_move);
	if (to_move < move_to)
		while ((int)(--len) >= 0)
			move_to[len] = to_move[len];
	else
		while (i < len)
		{
			move_to[i] = to_move[i];
			i++;
		}
	return (dst);
}
