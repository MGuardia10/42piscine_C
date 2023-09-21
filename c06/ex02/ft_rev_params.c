/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:13:40 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/13 14:54:56 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	while (--argc)
	{
		while (*argv[argc])
		{
			ft_putchar(*argv[argc]);
			++argv[argc];
		}
		ft_putchar('\n');
	}
	return (0);
}
