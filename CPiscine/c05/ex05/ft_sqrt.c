/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 02:44:06 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/16 03:07:00 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
		return (0);
	while (i <= 46340)
	{
		if (i * i < nb)
			i++;
		else
			break ;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}
