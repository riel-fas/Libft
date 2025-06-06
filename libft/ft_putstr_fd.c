/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:44:37 by riel-fas          #+#    #+#             */
/*   Updated: 2024/11/14 17:40:31 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	if (fd < 0 || !s)
		return ;
	x = 0;
	while (s[x])
	{
		write (fd, &s[x], 1);
		x++;
	}
}
