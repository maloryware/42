/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 07:43:06 by davpache          #+#    #+#             */
/*   Updated: 2025/03/12 07:58:11 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ??? */
/* who fucking knows anymore idk */

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb < 0)
	{
		while (power-- > 1)
		{
			nb *= nb;
		}
		return (-nb / 2);
	}
	while (power-- > 1)
	{
		nb *= nb;
	}
	return (nb);
}
