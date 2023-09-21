/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:32:32 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/13 12:57:25 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	*str;

	str = argv[0];
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (argc);
}
