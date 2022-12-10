/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 07:13:42 by mugurel           #+#    #+#             */
/*   Updated: 2022/12/10 23:07:17 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	d = (char *)malloc(len + 1 * sizeof(char));
	if (!d)
		return (0);
	i = 0;
	s += start;
	while (s[i] && i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (d);
}
