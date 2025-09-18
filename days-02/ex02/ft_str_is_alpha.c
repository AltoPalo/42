/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:30:47 by iamara            #+#    #+#             */
/*   Updated: 2025/09/16 11:49:01 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			j = 0;
		}		
		i++;
	}
	return (j);
}

/*#include <stdio.h>

int main(void)
{
	char	*str="AAAA";
	char	*str1="1111";

	ft_str_is_alpha(str);
	printf("%sresultat%d\n", str, ft_str_is_alpha(str));
	printf("%sresultat%d\n", str1, ft_str_is_alpha(str1));

}*/
