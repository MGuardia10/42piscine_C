/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:37:53 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/10 17:15:11 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_strings(char *str, char *to_find, int i)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (to_find[j])
	{
		if (str[i + j] == to_find[j])
			count++;
		j++;
	}
	if (count == j)
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (check_strings(str, to_find, i))
				return (str + i);
		}
		i++;
	}
	return (0);
}
