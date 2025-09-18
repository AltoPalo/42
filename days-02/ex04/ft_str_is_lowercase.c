/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:06:44 by iamara            #+#    #+#             */
/*   Updated: 2025/09/16 12:14:53 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			j = 0;
		}
		i++;
	}
	return (j);
}

#include <stdio.h>

int	main(void)
{
	char *str="A";

	printf("%sresultat%d\n", str, ft_str_is_lowercase(str));
}
