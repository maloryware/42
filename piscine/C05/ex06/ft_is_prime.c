/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 08:14:18 by davpache          #+#    #+#             */
/*   Updated: 2025/03/12 08:21:53 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this MUST be what they expect us to do, 
 * right?? right??????????
 */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = nb;
	while (i > 1)
	{
		if (nb % i == 0 && nb != i)
			return (0);
		i--;
	}
	return (1);
}
