/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:43:28 by iamara            #+#    #+#             */
/*   Updated: 2025/09/14 09:38:12 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	n;

	n = 'z';
	while (n >= 'a')
	{
		write(1, &n, 1);
		n--;
	}
}
/*int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}*/
