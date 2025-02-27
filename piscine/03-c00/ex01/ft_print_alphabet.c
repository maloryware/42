/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 04:17:22 by davpache          #+#    #+#             */
/*   Updated: 2025/02/27 04:24:35 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	curr;

	curr = 'a';
	while (curr <= 'z')
	{
		write (1, &curr, 1);
		curr++;
	}
}
