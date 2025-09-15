/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 09:31:14 by iamara            #+#    #+#             */
/*   Updated: 2025/09/14 16:26:22 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n1, int n2, int n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
	if (!(n1 == '7' && n2 == '8' && n3 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int		n1;
	int		n2;
	int		n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_print(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
/*
int main(void)
{
	ft_print_comb();
	return(0);
}*/
