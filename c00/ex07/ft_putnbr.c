/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:32:42 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/01 20:52:14 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648 || nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			ft_print('-');
			ft_print('2');
			ft_putnbr(147483648);
			return ;
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb < 0)
		{
			nb = -nb;
			ft_print('-');
			ft_putnbr(nb);
		}
		else
		{
			ft_print(nb + '0');
		}
	}
}
