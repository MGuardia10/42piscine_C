/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.cc                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:53:06 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/01 15:58:27 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(int n)
{
	write(1, &n, 1);
}

void	manage_numbers(int number)
{
	int	c;
	int	d;

	if (number > 9)
	{
		c = number / 10;
		d = number % 10;
		print_char(c + 48);
		print_char(d + 48);
	}
	else
	{
		print_char(48);
		print_char(number + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			manage_numbers(a);
			print_char(32);
			manage_numbers(b);
			if (a != 98 || b != 99)
			{
				print_char(44);
				print_char(32);
			}
			b++;
		}
		a++;
	}
}
