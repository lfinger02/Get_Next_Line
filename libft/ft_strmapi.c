/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 09:12:29 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/10 12:23:57 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh_new_str;
	int		i;

	if (s == 0)
	{
		return (NULL);
	}
	fresh_new_str = ft_strnew(ft_strlen(s));
	if (fresh_new_str == 0)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		fresh_new_str[i] = f(i, s[i]);
		i++;
	}
	return (fresh_new_str);
}
