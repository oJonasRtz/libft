/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:20:40 by jopereir          #+#    #+#             */
/*   Updated: 2025/02/21 12:08:46 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_double_free(void *a, void *b)
{
	free(a);
	free(b);
	return (NULL);
}

void	*ft_infinit_free(void *s, ...)
{
	va_list	args;
	void	*temp;

	free(s);
	va_start(args, s);
	while (1)
	{
		temp = va_arg(args, void *);
		if (!temp)
			break ;
		free(temp);
	}
	va_end(args);
	return (NULL);
}

void	*ft_struct_free(void *a)
{
	t_node	*current;

	if (!a)
		return (NULL);
	current = (t_node *)a;
	ft_struct_free(current->next);
	free(current);
	return (NULL);
}
