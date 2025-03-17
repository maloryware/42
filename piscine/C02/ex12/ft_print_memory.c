/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:01:15 by davpache          #+#    #+#             */
/*   Updated: 2025/03/17 16:48:26 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_printable(char *addr, int start, int size)
{
	int	index;
	int	value;

	index = 0;
	while (index < 16 && index + start < size)
	{
		value = addr[index + start];
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
	while (index > 0)
	{
		buffer[--index] = '0';
	}
	write(1, buffer, 16);
	write(1, ": ", 2);
}

void	ft_atoh(char *in, int start, char out[32], int flag)
{
	int		i;
	char	data[16];

	i = -1;
	while (++i < 16)
		data[i] = in[i + start];
	i = 0;
	while (i <= 32)
	{
		if (!data[i / 2])
			flag = 1;
		if (data[i / 2] && (data[i / 2] >= 32 && data[i / 2] < 127) && !flag)
		{
			out[i + 1] = "0123456789abcdef"[data[i / 2] % 16];
			out[i] = "0123456789abcdef"[data[i / 2] / 16 % 16];
			i += 2;
		}
		else
		{
			out[i++] = ' ';
			out[i++] = ' ';
		}
	}
}

void	ft_output(void *addr, int size, int pos)
{
	char	out[32];
	int		index;
	int		flag;

	flag = 0;
	ft_memaddr(addr + pos);
	ft_atoh(addr, pos, out, flag);
	index = -1;
	while (++index < 32)
	{
		write(1, &out[index], 1);
		if ((index + 1) % 4 == 0)
			write(1, " ", 1);
	}
	ft_putstr_printable(addr, pos, size);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		pos;

	if (size != 0)
	{
		pos = 0;
		while (pos < (int) size)
		{
			ft_output(addr, size, pos);
			pos += 16;
		}
	}
	return (addr);
}

/* 
int	main(void)
{
	char	*test = "Hate. Let me tell you how much I've come to hate you(...)";

	ft_print_memory(test, 58);
}

 */