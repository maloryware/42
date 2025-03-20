/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:25:38 by davpache          #+#    #+#             */
/*   Updated: 2025/03/20 16:00:22 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*out;
	int		i;

	i = 0;
	while (src[i])
		i++;
	out = (char *) malloc(sizeof(out) * (i + 1));
	while (i >= 0)
	{
		out[i] = src[i];
		i--;
	}
	return (out);
}
