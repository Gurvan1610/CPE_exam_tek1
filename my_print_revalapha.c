void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	main()
{
  int	i;

  i = 122;
  while (i > 96)
    {
      my_putchar(i);
      i--;
    }
  my_putchar('\n');
  return (0);
}
