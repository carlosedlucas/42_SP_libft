/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosed <carlosed@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:19:47 by carlosed          #+#    #+#             */
/*   Updated: 2021/08/20 19:16:49 by carlosed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (size <= len)
	{
		return (size + ft_strlen(src));
	}
	if (size > len)
	{
		while ((size - len) > 1 && src[i] != '\0')
		{
			dst[len + i] = src[i];
			i++;
			size--;
		}
		dst[len + i] = '\0';
	}
	return (len + ft_strlen(src));
}
