/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:25:47 by davpache          #+#    #+#             */
/*   Updated: 2025/03/13 12:54:44 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	itoh_2(unsigned int in, char *out)
{
	int		i;
	int		div;

	i = 2;
	div = in;
	while (i >= 0)
	{
		out[--i] = "0123456789abcdef"[div % 16];
		div /= 16;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[2];

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			itoh_2(str[i], hex);
			write(1, &hex, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
