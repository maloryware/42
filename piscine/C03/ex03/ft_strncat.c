/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:49:36 by davpache          #+#    #+#             */
/*   Updated: 2025/03/20 16:35:13 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	j;

	j = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[j] && j < nb)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest);
}
