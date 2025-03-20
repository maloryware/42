/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 08:51:47 by davpache          #+#    #+#             */
/*   Updated: 2025/03/20 16:17:52 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	while (*a && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	write_args(int argc, char **argv)
{
	int	arg;
	int	i;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i])
		{
			write(1, &argv[arg][i], 1);
			i++;
		}
		write(1, "\n", 1);
		arg++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < (argc - 1))
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
			continue ;
		}
		i++;
	}
	write_args(argc, argv);
	return (0);
}
