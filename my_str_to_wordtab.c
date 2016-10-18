#include "str_to_wordtab.h"

int     is_alnum(char c)
{
  if (c > 33 && c < 126)
    return (1);
  return (0);
}

int	word_count(char *str)
{
  int	i;
  int	word;

  word = 0;
  i = 0;
  while (str[i])
    {
      if (is_alnum(str[i]) == 1 && is_alnum(str[i + 1]) == 0)
        word++;
      i++;
    }
  return (word);
}

char      *my_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while (n > 0 && *(src + i))
    {
      *(dest + i) = *(src + i);
      ++i;
      --n;
    }
  if (n > 0)
    *(dest + i) = '\0';
  return (dest);
}

char	**my_str_to_wordtab(char *str)
{
  int	j;
  int	i;
  int	len;
  char	**wordtab;

  j = 0;
  len = 0;
  i = 0;
  wordtab = malloc((word_count(str) + 1) * sizeof(char *));
  while (str[i])
    {
      if (is_alnum(str[i]))
	len++;
      if (is_alnum(str[i]) == 1 && is_alnum(str[i + 1]) == 0)
	{
	  wordtab[j] = malloc(len + 1);
	  my_strncpy(wordtab[j], &str[i - len + 1], len);
	  len = 0;
	  j++;
	}
      i++;
    }
  wordtab[j] = NULL;
  return (wordtab);
}
