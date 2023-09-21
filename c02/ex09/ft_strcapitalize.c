/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitlize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:58:00 by mguardia          #+#    #+#             */
/*   Updated: 2023/06/08 15:51:01 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_especial(int i, char *str)
{
	int	esp1;
	int	esp2;
	int	esp3;
	int	esp4;

	esp1 = (str[i - 1] >= 32 && str[i - 1] <= 47);
	esp2 = (str[i - 1] >= 58 && str[i - 1] <= 64);
	esp3 = (str[i - 1] >= 91 && str[i - 1] <= 96);
	esp4 = (str[i - 1] >= 123 && str[i - 1] <= 126);
	return (esp1 || esp2 || esp3 || esp4);
}

char	*ft_strcapitalize(char *str)
{
	int	i;	

	i = 1;
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		if (is_especial(i, str))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
