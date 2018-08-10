/*
** my_put_uns.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 16:45:31 2015 alexis zeghers
** Last update Sun Nov 15 00:29:03 2015 alexis zeghers
*/

#include "include/head.h"

int		init_put_uns(va_list *ap)
{
  unsigned int	n;
  int		count;
  int		i;

  count = 0;
  n = va_arg(ap, unsigned int);
  i = n;
  while (i >= 10)
    {
      i = i / 10;
      count = count + 1;
    }
  my_put_uns(n);
  count = count + 1;
  return (count);
}

void		my_put_uns(unsigned int n)
{
  if (n >= 10)
    my_put_uns(n / 10);
  my_put_char(n % 10 + '0');
}
