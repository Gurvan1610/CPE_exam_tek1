#include <stdio.h>
#include <stdlib.h>

int	my_power_it(int nb, int pow)
{
  int	result;

  if (pow == 0)
    return (1);
  else if (pow < 0)
    return (0);
  result = nb;
  while (pow > 1)
    {
      result *= nb;
      if (result < 0)
	return (0);
      pow--;
    }
  return (result);
}

int	main(int ac, char **av)
{
  if (ac == 3)
    printf("%d\n", my_power_it(atoi(av[1]), atoi(av[2])));
  return (0);
}
