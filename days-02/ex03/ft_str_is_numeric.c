/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:55:14 by iamara            #+#    #+#             */
/*   Updated: 2025/09/16 14:00:54 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
	char	*str="a";

	printf("%sresultat%d\n", str, ft_str_is_numeric(str));
}
