/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 04:41:26 by mugurel           #+#    #+#             */
/*   Updated: 2022/12/10 17:57:07 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_l;

	src_l = ft_strlen(src);
	if (!destsize)
		return (src_l);
	i = 0;
	while (i < destsize && src[i] && dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (destsize < src_l)
		dest[destsize - 1] = '\0';
	else if (destsize != 0)
		dest[i] = '\0';
	return (src_l);
}
