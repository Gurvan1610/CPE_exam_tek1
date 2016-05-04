/*
** tab_mult.c for tab_mult in /home/exam/rendu/ex_3
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Wed May  4 07:52:55 2016 Exam User
** Last update Wed May  4 08:00:42 2016 Exam User
*/

#include <stdio.h>
#include <stdlib.h>

void	tab_mult(int nb)
{
  int	mult;
  int	result;

  mult = 1;
  while (mult <= 9)
    {
      result = mult * nb;
      printf("%i x ", (mult));
      printf("%i = ", (nb));
      printf("%i\n", (result));
      mult++;
    }
}

int	main(int ac, char **av)
{
  if (ac == 2)
    tab_mult(atoi(av[1]));
  else
    printf("\n");
  return (0);
}
