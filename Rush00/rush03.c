/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: H3x4Core <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:36:02 by m******e          #+#    #+#             */
/*   Updated: 2022/06/11 03:03:57 by H3x4Core         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_line(int x, char left, char center, char right)
{
	int	i;

	i = 0;
	ft_putchar(left);
	while (i++ < (x - 1))
		ft_putchar(center);
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 && y > 0)
	{
		ft_line(x, 'A', 'B', 'C');
		while (i++ < (y - 1))
			ft_line(x, 'B', ' ', 'B');
		if (y > 1)
			ft_line(x, 'A', 'B', 'C');
	}
}
