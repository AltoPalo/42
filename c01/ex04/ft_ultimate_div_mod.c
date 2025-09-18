/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:20:21 by iamara            #+#    #+#             */
/*   Updated: 2025/09/18 11:24:43 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*#include <stdio.h>
int main(void)
{
	int	a;
	int	b;
	a = 5;
	b = 4;

	ft_ultimate_div_mod(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return (0);
}*/
