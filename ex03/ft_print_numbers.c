/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwilliam <wwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:13:03 by wwilliam          #+#    #+#             */
/*   Updated: 2025/05/21 13:36:46 by wwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void    ft_print_numbers (void)
{
    char    number;

    number = '0';
    while (number <= '9')
    {
        putchar (number);
        number++;
    }
}

// int main (void)
// {
//     ft_print_numbers();
// }