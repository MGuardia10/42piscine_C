/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:41:41 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/15 08:55:12 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	else if (size < dest_len)
		return (size + ft_strlen(src));
	i = 0;
	j = dest_len;
	while (src[i] && j < size - 1)
	{
		*(dest + j) = src[i];
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (ft_strlen(src) + dest_len);
}
