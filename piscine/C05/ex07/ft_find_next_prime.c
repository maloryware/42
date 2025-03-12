/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 08:17:58 by davpache          #+#    #+#             */
/*   Updated: 2025/03/12 08:28:29 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* real funny. */

int	ft_find_next_prime(int nb)
{
	int	check;
	int	i;

	check = 0;
	while (check != 1)
	{
		i = nb;
		while (i > 1)
		{
			if (nb % i == 0 && nb != i)
			{
				check = 1;
				break ;
			}
			i--;
		}
		if (i == 1 && nb > 1)
		{
			return (nb);
		}
		nb++;
	}
	return (nb);
}
