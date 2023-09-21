/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:07:06 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/12 14:48:17 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	is_special(char c)
{
	if (c == '-')
		return (1);
	if (c == '+')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	minus_count;
	int	number;

	minus_count = 0;
	number = 0;
	while (is_space(*str))
		str++;
	while (is_special(*str))
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (minus_count % 2 == 0)
		return (number);
	return (-number);
}
