/*
** do_op.c for do_op in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 26 08:31:45 2016 Exam User
** Last update Sat Mar 26 08:42:30 2016 Exam User
*/

#include <stdio.h>
#include <stdlib.h>

int	check_op(char *op)
{
  if (op[0] == '+')
    return (1);
  else if (op[0] == '-')
    return (2);
  else if (op[0] == '*')
    return (3);
  else if (op[0] == '/')
    return (4);
  else if (op[0] == '%')
    return (5);
  return (0);
}

void	do_op(int nb1, char *op, int nb2)
{
  int	ope;
  int	result;

  result = 0;
  ope = check_op(op);
  if (ope == 1)
    result = nb1 + nb2;
  else if (ope == 2)
    result = nb1 - nb2;
  else if (ope == 3)
    result = nb1 * nb2;
  else if (ope == 4)
    {
      if (nb2 == 0)
	return;
      result = nb1 / nb2;
    }
  else if (ope == 5)
    {
      if (nb2 == 0)
	return;
      result = nb1 % nb2;
    }
  printf("%d", result);
}

int	main(int ac, char **av)
{
  if (ac == 4)
    do_op(atoi(av[1]), av[2], atoi(av[3]));
  printf("\n");
  return (0);
}
