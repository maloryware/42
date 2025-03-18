/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:29:11 by davpache          #+#    #+#             */
/*   Updated: 2025/03/18 18:43:52 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*out;
	int		i;

	if (min >= max)
		return (0);
	out = (int *)malloc(max - min);
	i = 0;
	while (min < max)
	{
		out[i] = min;
		min++;
		i++;
	}
	return (out);
}
