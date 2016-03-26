/*
** str_capitalize.c for str_capitalize in /home/exam/rendu/ex_3
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 26 08:54:06 2016 Exam User
** Last update Sat Mar 26 09:01:35 2016 Exam User
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

void	capitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[0] >= 97 && str[i] <= 122)
	{
	  str[0] = str[0] - 32;
	  i++;
	}
      if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == ' ')
	{
	  str[i] = str[i] - 32;
	  i++;
	}
      i++;
    }
  my_putstr(str);
}

int	main(int ac, char **av)
{
  if (ac == 2)
    capitalize(av[1]);
  my_putchar('\n');
  return (0);
}
