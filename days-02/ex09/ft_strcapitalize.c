/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:57:40 by iamara            #+#    #+#             */
/*   Updated: 2025/09/17 13:28:49 by iamara           ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122 && j == 0)
		{
			str[i] = str[i] - 32;
			j = 1;
		}
		else if (str[i] >= 65 && str[i] <= 90 && j == 1)
		{
			str[i] = str[i] +32;
		}
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
			j = 0;
		if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90))
			j = 1;
		i++;
	}
	return (str);
}
#include <stdio.h>

int main(void)
{
	char	str[] = "hi, how Are you? 42worD6s2 0 forTY-twO; fIFty+anD+oNe";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
