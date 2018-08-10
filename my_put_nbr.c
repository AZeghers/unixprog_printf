/*
** my_put_nbr.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 16:43:15 2015 alexis zeghers
** Last update Mon Nov 16 18:49:21 2015 alexis zeghers
*/

#include "include/head.h"

int	init_put_nbr(va_list *ap)
{
  int	n;
  int	i;
  int	count;

  count = 0;
  n = va_arg(ap, int);
  i = n;
  while (i >= 10)
    {
      i = i / 10;
      count = count + 1;
    }
  my_put_nbr(n);
  count = count + 1;
  return (count);
}

int	my_put_nbr(int n)
{
  if (n == -2147483648)
    {
      write(1, "-2147483648", 11);
      return (0);
    }
  if (n < 0)
    {
      n = n * (-1);
      my_put_char('-');
    }
  if (n >= 10)
    my_put_nbr(n / 10);
  my_put_char(n % 10 + '0');
  return (0);
}
