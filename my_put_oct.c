/*
** my_put_oct.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 18:01:32 2015 alexis zeghers
** Last update Mon Nov 16 18:49:10 2015 alexis zeghers
*/

#include "include/head.h"

int	init_put_oct(va_list *ap)
{
  int	n;
  int	i;
  int	count;

  count = 0;
  n = va_arg(ap, int);
  i = n;
  while (i >= 8)
    {
      i = i / 8;
      count = count + 1;
    }
  my_put_oct(n);
  count = count + 1;
  return (count);
}

int	my_put_oct(int n)
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
