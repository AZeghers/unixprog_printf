/*
** my_put_uns_bin.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 18:16:11 2015 alexis zeghers
** Last update Sun Nov 15 00:28:50 2015 alexis zeghers
*/

#include "include/head.h"

int		init_put_uns_bin(va_list *ap)
{
  unsigned int	n;
  int		count;
  int		i;

  count = 0;
  n = va_arg(ap, unsigned int);
  i = n;
  while (i >= 2)
    {
      i = i / 2;
      count = count + 1;
    }
  my_put_uns_bin(n);
  count = count + 1;
  return (count);
}

void		my_put_uns_bin(unsigned int n)
{
  if (n >= 2)
    my_put_uns_bin(n / 2);
  my_put_char(n % 2 + '0');
}
