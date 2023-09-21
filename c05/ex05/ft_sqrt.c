/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:19:49 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/14 12:38:07 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int			low;
	int			high;
	int			mid;
	long long	square;

	low = 0;
	high = nb;
	if (nb < 0)
		return (0);
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		square = (long long)mid * mid;
		if (square == nb)
			return (mid);
		else if (square < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}
