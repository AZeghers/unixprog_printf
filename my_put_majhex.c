/*
** my_put_majhex.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 16:58:39 2015 alexis zeghers
** Last update Mon Nov 16 18:48:59 2015 alexis zeghers
*/

#include "include/head.h"

int	init_put_majhex(va_list *ap)
{
  int	n;
  int	i;
  int	count;

  count = 0;
  n = va_arg(ap, int);
  i = n;
  while (i >= 16)
    {
      i = i / 16;
      count = count + 1;
    }
  my_put_majhex(n, "0123456789ABCDEF");
  count = count + 1;
  return (count);
}

int	my_put_majhex(int n, char *hex)
{
  if (n == -2147483648)
    {
      write(1, "-80000000", 9);
      return (0);
    }
  if (n < 0)
    {
      n = n * (-1);
      my_put_char('-');
    }
  if (n >= 16)
    my_put_majhex(n / 16, "0123456789ABCDEF");
  my_put_char(hex[n % 16]);
  return (0);
}
