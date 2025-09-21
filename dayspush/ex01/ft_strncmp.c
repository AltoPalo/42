/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 16:40:33 by iamara            #+#    #+#             */
/*   Updated: 2025/09/21 16:49:43 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (1 == n)
		return (0);
	return (s1[i] - s2[1]);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Help";

	printf(" %d", ft_strncmp(str1, str2, 5));
	return (0);
}
