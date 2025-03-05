/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:25:47 by davpache          #+#    #+#             */
/*   Updated: 2025/03/05 14:00:47 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
		{
			write(1, "\\", 1);
			
			write(1, itoh((unsigned int) str[i]), 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
