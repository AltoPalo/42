/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamara <iamara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:48:01 by iamara            #+#    #+#             */
/*   Updated: 2025/09/24 14:09:05 by iamara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int arc, char *arv[])
{
	int	i;
	int	argcount;

	argcount = 1;
	if (arc < 2)
		return (0);
	while (argcount < arc)
	{	
		i = 0;
		while (arv[argcount][i])
		{
			write(1, &arv[argcount][i], 1);
			i++;
		}
		argcount++;
		write(1, "\n", 1);
	}
	return (0);
}
