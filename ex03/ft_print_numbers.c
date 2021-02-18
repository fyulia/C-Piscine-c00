/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sporcini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:37:59 by sporcini          #+#    #+#             */
/*   Updated: 2021/02/18 21:37:58 by sporcini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	num1;
	char	num2;

	num1 = '0';
	num2 = '9';
	while (num1 <= num2)
	{
		ft_putchar(num1);
		num1++;
	}
}
