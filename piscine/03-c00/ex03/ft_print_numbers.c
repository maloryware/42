/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 01:19:49 by davpache          #+#    #+#             */
/*   Updated: 2025/02/27 04:36:16 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// yes, norminette, 
// i'm creating a global variable 
// since you won't let me 
// create two local ones.

void	ft_is_negative(void)
{
	int		i;
	char	x;

	i = 0;
	while (i <= 9)
	{
		x = '0' + i;
		write(1, &x, 1);
	}
}
