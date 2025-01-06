/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:27 by jopereir          #+#    #+#             */
/*   Updated: 2025/01/06 16:23:26 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	draw(int *a, int size)
{
	int	i;

	i = 0;
	while (i < size)
		printf("%d ", a[i++]);
	printf("\n");
}

int	main(void)
{
	char	*temp;
	char	*temp2;

	temp = ft_calloc(1, 1);
	temp2 = ft_calloc(1, 1);
	ft_infinit_free(temp, temp2, NULL);
	return (0);
}
