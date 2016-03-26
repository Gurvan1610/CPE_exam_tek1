/*
** rotone.c for rotone in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 26 08:44:49 2016 Exam User
** Last update Sat Mar 26 08:51:15 2016 Exam User
*/

void	my_putchar(char c)
{
  write (1, &c, 1);
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

void	rotone(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 89 || str[i] >= 97 && str[i] <= 121)
	str[i] = str[i] + 1;
      else if (str[i] == 90 || str[i] == 122)
	str[i] = str[i] - 25;
      i++;
    }
  my_putstr(str);
}

int	main(int ac, char **av)
{
  if (ac == 2)
    rotone(av[1]);
  my_putchar('\n');
  return (0);
}
