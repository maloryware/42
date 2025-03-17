/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:58:29 by davpache          #+#    #+#             */
/*   Updated: 2025/03/14 08:37:48 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	while (i < n)
	{
		if (i > size)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	i = 0;
	return (dest);
}
