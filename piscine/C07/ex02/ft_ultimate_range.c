/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:00:55 by davpache          #+#    #+#             */
/*   Updated: 2025/03/18 19:21:01 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*arrval;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arrval = (int *)malloc(max - min);
	i = 0;
	while (min < max)
	{
		arrval[i] = min;
		min++;
		i++;
	}
	*range = arrval;
	return (i);
}
