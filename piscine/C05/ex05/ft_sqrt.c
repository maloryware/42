/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 08:07:14 by davpache          #+#    #+#             */
/*   Updated: 2025/03/12 08:10:30 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* lol */

int	ft_sqrt(int nb)
{
	int	guess;

	guess = 1;
	while (guess * guess != nb)
	{
		guess++;
		if (guess / 2 > nb)
		{
			return (0);
		}
	}
	return (guess);
}
