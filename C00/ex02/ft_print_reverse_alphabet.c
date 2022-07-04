/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocandid <jocandid@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:15:43 by jocandid          #+#    #+#             */
/*   Updated: 2022/07/04 10:29:47 by jocandid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void ft_reverse_alphabet(char alphabet) 

{ 
  write(1, &alphabet, 1); 
}

void ft_print_reverse_alphabet(void)

{
  char letter;

  letter = 'z';
  while (letter >= 'a') {
    ft_reverse_alphabet(letter);
    letter--;
  }
}

int main () 
{
  ft_print_reverse_alphabet();
}

