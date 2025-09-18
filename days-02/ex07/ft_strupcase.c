/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:10:25 by iamara            #+#    #+#             */
/*   Updated: 2025/09/16 16:12:56 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;
	i = 0;
	
	while (str[i] != '\0') 
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}
#include <stdio.h>

int main(void)
{
	char	str[] = "hello";
		
	printf("%s\n", ft_strupcase(str));
}

