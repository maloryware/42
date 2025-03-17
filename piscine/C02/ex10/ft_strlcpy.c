/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:58:39 by davpache          #+#    #+#             */
/*   Updated: 2025/03/14 08:44:43 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	strlen;

	i = 0;
	strlen = 0;
	while (src[strlen++])
		;
	if (src[strlen - 1] == '\0')
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		if (size > 0)
			dest[i] = '\0';
		i = 0;
	}
	return (strlen - 1);
}
