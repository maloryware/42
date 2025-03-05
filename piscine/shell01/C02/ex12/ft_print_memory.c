/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:01:15 by davpache          #+#    #+#             */
/*   Updated: 2025/03/05 19:22:30 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void	itoh(unsigned int in, char out[], int len)
{
	int		div;
	int		qc;
	float	rem;

	len--;
	div = in;
	while (len >= 0)
	{
		qc = div / 16;
		rem = div % 16;
		if (rem >= 10)
			out[len] = 'a' + rem - 10;
		else
			out[len] = '0' + rem;
		len--;
		div = qc;
	}
}

void	itoh_arr(char arr[], int len)
{
	int		i;
	int		div;
	int		qc;
	float	rem;

	i = 0;
	len--;
	while (arr[i])
	{
		while (len >= 0)
		{
			qc = div / 16;
			rem = div % 16;
			if (rem >= 10)
				arr[len] = 'a' + rem - 10;
			else
				arr[len] = '0' + rem;
			len--;
			div = qc;
		}
		i++;
	}
}

void	ft_print_memory(void *addr, unsigned int size)
{
	char *out = (char *) &addr;
	itoh_arr(out, 15);
	write(1, out, size);
	write(1, ":", 1);
}

int	main(void)
{
	char	mychar[] = "this is a test!";

	ft_print_memory(mychar, 15);
}

*/