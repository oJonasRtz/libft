/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:27 by jopereir          #+#    #+#             */
/*   Updated: 2024/11/05 10:12:11 by jopereir         ###   ########.fr       */
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
	int	a[] = {3, 2, 1, 4, 7, 11, 10};

	printf("Antes\n");
	draw(a, 7);
	printf("Depois\n");
	ft_quicksort(a, 0, 6);
	draw(a, 7);
	return (0);
}
