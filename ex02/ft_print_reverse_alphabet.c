/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwilliam <wwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:02:07 by wwilliam          #+#    #+#             */
/*   Updated: 2025/05/21 19:58:23 by wwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
		write(1, &reverse, 1);
		reverse--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }
