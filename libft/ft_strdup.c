/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 10:19:53 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/25 17:19:07 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup_str;
	int		i;

	if (!(dup_str = malloc(sizeof(char) * (ft_strlen(s1) + 1))))
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		ft_strcpy(dup_str, s1);
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
