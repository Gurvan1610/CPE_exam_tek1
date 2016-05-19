/*
** my_max.c for my_max in /home/exam/rendu/ex_3
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Thu May 19 08:04:36 2016 Exam User
** Last update Thu May 19 08:12:02 2016 Exam User
*/

int	my_max(int itab[], int len)
{
  int	nb;
  int	i;

  i = 1;
  nb = itab[0];
  while (i < len)
    {
      if (nb < itab[i])
	nb = itab[i];
      i++;
    }
  return (nb);
}
