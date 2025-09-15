/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:01:31 by iamara            #+#    #+#             */
/*   Updated: 2025/09/14 09:33:21 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	n;

	n = 'a';
	while (n <= 'z')
	{
		write(1, &n, 1);
		n++;
	}
}
/* int	main(void)
{
	ft_print_alphabet();
	return(0);
}*/
