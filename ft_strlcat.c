/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosed <carlosed@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:19:47 by carlosed          #+#    #+#             */
/*   Updated: 2021/08/20 18:52:22 by carlosed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dest);
	if (size <= len)
	{
		return (size + ft_strlen(src));
	}
	if (size > len)
	{
		while ((size - len) > 1 && src[i] != '\0')
		{
			dest[len + i] = src[i];
			i++;
			size--;
		}
		dest[len + i] = '\0';
	}
	return (len + ft_strlen(src));
}
