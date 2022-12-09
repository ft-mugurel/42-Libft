/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:24:26 by mugurel           #+#    #+#             */
/*   Updated: 2022/12/08 23:31:25 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*src;

	src = (char *)s;
	i = (ft_strlen(src) - 1);
	len = ft_strlen(src);
	if (!ft_isascii(c))
		return (src);
	while (i >= 0)
	{
		if (src[i] == c)
			return (src + i);
		i--;
	}
	if (c == 0)
		return (src + len);
	return (0);
}
