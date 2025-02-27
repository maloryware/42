/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 01:55:22 by davpache          #+#    #+#             */
/*   Updated: 2025/02/27 04:36:30 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// ternaries are forbidden????

void	ft_is_negative(int n)
{
	char	x;

	if (x < 0)
	{
		x = 'N';
		return ;
	}
	x = 'P';
	write (1, &x, 1);
}
