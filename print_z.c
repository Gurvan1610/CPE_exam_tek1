void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	main()
{
  my_putchar('z');
  my_putchar('\n');
  return (0);
}
