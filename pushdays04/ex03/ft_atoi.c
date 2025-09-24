/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:59:51 by iamara            #+#    #+#             */
/*   Updated: 2025/09/23 14:06:18 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	resultat;

	i = 0;
	resultat = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -signe;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (signe * resultat);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	if (argc < 2)
	{
		printf(":%s", argv[0]);
	}
	i = 1;
	while (i < argc)
	{
		printf("argv[%d] = \"%s\" -> %d\n", i, argv[i], ft_atoi(argv[i]));
	i++;
	}
	return (0);
}*/
