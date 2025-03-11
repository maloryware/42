/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:01:15 by davpache          #+#    #+#             */
/*   Updated: 2025/03/11 02:46:07 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_printable(char *addr, int start)
{
	int	index;
	int	value;

	while (index < 16)
	{
		value = addr[index];
		if (value < 32 || value == 127)
		{
			write(1, ".", 1);
		}
		else
			write(1, &value, 1);
		index++;
	}
	write(1, "\n", 1);
}

void	ft_memaddr(void *addr)
{
	char					buffer[16];
	int						index;
	unsigned long long		b;

	b = (unsigned long long) addr;
	index = 16;
	while (b)
	{
		buffer[--index] = "0123456789abcdef"[b % 16];
		b /= 16;
	}
	write(1, buffer, 16);
	write(1, ": ", 2);
}

void	ft_atoh(char *in, int start, char out[32])
{
	int		i;
	int		div;
	char	data[16];

	i = -1;
	while (++i < 16)
	{
		data[i] = in[i + start];
	}
	i = 0;
	while (i < 32)
	{
		if (data[i / 2])
		{
			div = data[i / 2];
			out[i + 1] = "0123456789abcdef"[div % 16];
			div /= 16;
			out[i] = "0123456789abcdef"[div % 16];
			i += 2;
		}
		else
		{
			out[i++] = ' ';
			out[i++] = ' ';
		}
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		pos;
	char	out[32];
	int		index;

	if (size != 0)
	{
		ft_memaddr(addr);
		ft_atoh(addr, pos, out);
		index = 0;
		while (index < 32)
		{
			write(1, &out[index], 1);
			if ((index + 1) % 4 == 0)
				write(1, " ", 1);
			index++;
		}
		ft_putstr_printable(addr, pos);
	}
	return (addr);
}

int	main(void)
{
	char	mychar[] = "long string but not that long sdsd wowowowowo";

	ft_print_memory(mychar, 46);
}
