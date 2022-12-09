/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:09:47 by mugurel           #+#    #+#             */
/*   Updated: 2022/12/08 23:23:07 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*src;

	src = (char *)s;
	i = 0;
	if (!ft_isascii(c))
		return (src);
	while (src[i])
	{
		if (src[i] == c)
			return (src + i);
		i++;
	}
	if (c == 0)
		return (src + i);
	return (0);
}
