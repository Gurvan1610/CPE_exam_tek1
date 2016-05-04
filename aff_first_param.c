/*
** aff_first_param.c for aff_first_param in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Wed May  4 07:34:38 2016 Exam User
** Last update Wed May  4 07:38:47 2016 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac >= 2)
    my_putstr(av[1]);
  my_putchar('\n');
  return (0);
}
