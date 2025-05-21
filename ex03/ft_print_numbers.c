/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwilliam <wwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:43:48 by wwilliam          #+#    #+#             */
/*   Updated: 2025/05/21 20:00:57 by wwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		putchar (number);
		number++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
