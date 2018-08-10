/*
** my_put_unprint.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 18:30:16 2015 alexis zeghers
** Last update Mon Nov 16 20:33:47 2015 alexis zeghers
*/

#include "include/head.h"

int	init_put_unprint(va_list *ap)
{
  char	*str;
  int	count;

  str = (va_arg(ap, char*));
  if (str == NULL)
    count = my_put_str("(null)");
  else
    count = my_put_unprint(str);
  return (count);
}

int	my_put_printoct(int n)
{
  if (n == -2147483648)
    {
      write(1, "-20000000000", 12);
      return (0);
    }
  if (n < 0)
    {
      n = n * (-1);
      my_put_char('-');
    }
  if (n >= 8)
    my_put_oct(n / 8);
  my_put_char('0' + n % 8);
  return (0);
}

int	my_put_unprint(char *str)
{
  int	count;
  int	i;

  count = 0;
  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_put_char('\\');
	  if (str[i] < 80)
	    my_put_char('0');
	  if (str[i] < 8)
	    my_put_char('0');
	  my_put_printoct(str[i]);
	  count = count + 4;
	}
      else
	count = count + my_put_char(str[i]);
      i = i + 1;
    }
  return (count);
}
