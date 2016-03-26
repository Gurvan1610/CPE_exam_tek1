/*
** fprime.c for fprime in /home/roux_l/Exam
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Sat Mar 26 14:05:44 2016 Guillaume Roux
** Last update  Sat Mar 26 14:05:44 2016 Guillaume Roux
*/

#include <stdlib.h>

void  my_putchar(char c)
{
  write (1, &c, 1);
}

void  my_put_nbr(int nb)
{
  if (nb <= 9)
    my_putchar(nb + 48);
  else
  {
    my_put_nbr(nb / 10);
    my_put_nbr(nb % 10);
  }
}

int   main(int ac, char **av)
{
  int nb;
  int n;

  if (ac == 2)
  {
    nb = atoi(av[1]);
    if (nb == 1)
      my_put_nbr(1);
    while (42)
    {
      n = 1;
      while (++n <= nb)
      {
        if (nb % n == 0)
        {
          my_put_nbr(n);
          nb = nb / n;
          break;
        }
      }
      if (nb == 1)
        break;
      else
        my_putchar('*');
    }
  }
  my_putchar('\n');
  return (0);
}