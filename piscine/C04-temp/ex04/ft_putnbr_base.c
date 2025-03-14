/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 05:08:49 by davpache          #+#    #+#             */
/*   Updated: 2025/03/12 05:58:40 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	revout(char *str, int size)
{
	while (--size >= 0)
	{
		write(1, &str[size], 1);
	}
}

int	flag_invalid(char *str, int *nb)
{
	int	i;
	int	j;

	if (*nb < 0)
	{
		*nb = -*nb;
		write(1, "-", 1);
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		i;
	int		len;
	char	out[512];

	len = 0;
	while (base[len])
		len++;
	if (len < 2 || flag_invalid(base, &nb))
		return ;
	i = 0;
	while (nb || (nb == 0 && i == 0))
	{
		out[i] = base[nb % len];
		nb /= len;
		i++;
	}
	revout(out, i);
}
