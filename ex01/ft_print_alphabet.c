/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwilliam <wwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:01:59 by wwilliam          #+#    #+#             */
/*   Updated: 2025/05/21 16:02:04 by wwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_alphabet (void)

{
   char letter;

    letter = 'a';
    while (letter <= 'z') 
    {
        putchar (letter);
        letter++;
    }
}

int main (void)
{
    ft_print_alphabet();
}



