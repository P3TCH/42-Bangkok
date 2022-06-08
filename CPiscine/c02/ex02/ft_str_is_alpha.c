/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 00:35:57 by marvin            #+#    #+#             */
/*   Updated: 2022/06/02 00:35:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 97 || str[i] > 122)
		{
			if (str[i] < 65 || str[i] > 90)
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}