/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:02:48 by sarfreit          #+#    #+#             */
/*   Updated: 2025/09/27 17:02:48 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*temp_dst;
	unsigned const char	*temp_src;

	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned const char *) src;
	if ((!dst && !src) || (dst == src) || (len == 0))
		return (dst);
	if (temp_dst > temp_src)
	{
		while (len-- > 0)
		{
			temp_dst[len] = temp_src[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*(temp_dst++) = *(temp_src++);
			len--;
		}
	}
	return (dst);
}
