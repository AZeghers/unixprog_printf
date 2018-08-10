/*
** my_put_hex.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 17:11:59 2015 alexis zeghers
** Last update Sun Nov 15 00:27:46 2015 alexis zeghers
*/

#include "include/head.h"

int	init_put_hex(va_list *ap)
{
  long	n;
  int	i;
  int	count;

  count = 0;
  n = va_arg(ap, long);
  i = n;
  while (i >= 16)
    {
      i = i / 16;
      count = count + 1;
    }
  my_put_hex(n, "0123456789abcdef");
  count = count + 1;
  return (count);
}

void	my_put_hex(long n, char *hex)
{
  if (n >= 16)
    my_put_hex(n / 16, "0123456789abcdef");
  my_put_char(hex[n % 16]);
}
