/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocandid <jocandid@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:15:43 by jocandid          #+#    #+#             */
/*   Updated: 2022/07/04 10:30:00 by jocandid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void ft_number(char alphabet) 

{ 
  write(1, &alphabet, 1); 
}

void ft_print_number(void)

{
  char letter;

  letter = '1';
  while (letter >= '9') {
    ft_number(letter);
    letter--;
  }
}

int main () 
{
  ft_print_number();
}
