/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:13:54 by iamara            #+#    #+#             */
/*   Updated: 2025/09/16 14:07:56 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char ft_str_is_printable(char *str)
{
	int	i;
	int	j;
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
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
	char	*str="1";

	printf("%sresultat%d\n", str, ft_str_is_printable(str));
}
