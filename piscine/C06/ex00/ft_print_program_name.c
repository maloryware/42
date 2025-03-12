/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 08:31:45 by davpache          #+#    #+#             */
/*   Updated: 2025/03/12 08:34:59 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *name)
{
	int	i;

	i = -1;
	while (name[++i])
	{
		write (1, &name[i], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 0)
		ft_print_program_name(argv[0]);
	write (1, "\n", 1);
	return (0);
}
