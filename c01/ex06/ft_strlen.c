/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:58:53 by iamara            #+#    #+#             */
/*   Updated: 2025/09/18 11:28:33 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	longueur;

	longueur = 0;
	while (str[longueur])
	{
		longueur++;
	}
	return (longueur);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Salut";
	printf("Length of string :%d", ft_strlen(str));
	return (0);
}
