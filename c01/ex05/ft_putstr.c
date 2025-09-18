/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:25:41 by iamara            #+#    #+#             */
/*   Updated: 2025/09/18 11:27:19 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	longueur;

	longueur = 0;
	while (str[longueur])
	{
		longueur++;
	}
		write(1, str, longueur);
}

int	main(void)
{
	ft_putstr("bonjour");
	return (0);
}
