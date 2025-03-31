/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:49:54 by denrodri          #+#    #+#             */
/*   Updated: 2025/03/31 15:46:41 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*mem;
	unsigned char	ch;
	size_t			i;

	i = 0;
	mem = (char *)b;
	ch = (unsigned char)c;
	while (i < len)
	{
		mem[i] = ch;
		++i;
	}
	return (b);
}
