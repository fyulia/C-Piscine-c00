/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sporcini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 19:42:39 by sporcini          #+#    #+#             */
/*   Updated: 2021/02/18 21:40:09 by sporcini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ans(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print(int a, int b)
{
	ft_ans(a / 10 + '0', a % 10 + '0');
	ft_putchar(' ');
	ft_ans(b / 10 + '0', b % 10 + '0');
	if (!(a == 98 && b == 99))
	{
		ft_ans(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print(num1, num2);
			num2++;
		}
		num1++;
	}
}
