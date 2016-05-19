/*
** maff_alpha.c for maff_alpha in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Thu May 19 08:14:48 2016 Exam User
** Last update Thu May 19 08:16:34 2016 Exam User
*/

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	main()
{
  int	i;
  int	j;

  i = 97;
  j = 66;
  while (i < 122)
    {
      my_putchar(i);
      my_putchar(j);
      i = i + 2;
      j = j + 2;
    }
  my_putchar('\n');
  return (0);
}
