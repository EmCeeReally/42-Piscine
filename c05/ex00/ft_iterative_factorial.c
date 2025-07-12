/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yudedele <yudedele@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:32:34 by yudedele          #+#    #+#             */
/*   Updated: 2025/03/10 17:32:35 by yudedele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
