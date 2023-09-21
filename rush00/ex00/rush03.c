/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:31:30 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/04 09:43:39 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_line(int x, char a, char b, char c)
{
	int	rep;

	rep = 0;
	while (rep < x)
	{
		if (rep == 0)
			ft_putchar(a);
		else
		{
			if (rep != x - 1)
				ft_putchar(b);
			else
				ft_putchar(c);
		}
		rep++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
		{
			write_line(x, 'A', 'B', 'C');
		}
		else if (i == y - 1)
		{
			write_line(x, 'A', 'B', 'C');
		}
		else
			write_line(x, 'B', ' ', 'B');
		i++;
	}
}
