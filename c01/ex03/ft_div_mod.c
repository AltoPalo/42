/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:00:59 by iamara            #+#    #+#             */
/*   Updated: 2025/09/18 11:08:58 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 105;
	b = 20;

	printf("a:%d\n", a);
	printf("b:%d\n", b);
	ft_div_mod(a, b, &div, &mod);
	return (0);
}*/
