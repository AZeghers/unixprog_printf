/*
** my_put_ptr.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 18:05:01 2015 alexis zeghers
** Last update Sun Nov 15 01:21:32 2015 alexis zeghers
*/

#include "include/head.h"

int	init_put_ptr(va_list *ap)
{
  long	n;
  int	count;
  int	i;

  count = 0;
  n = (long)va_arg(ap, void*);
  if (n == 0)
    {
      count = my_put_str("(nil)");
      return (count);
    }
  i = n;
  while (i >= 16)
    {
      i = i / 16;
      count = count + 1;
    }
  count = count + 3;
  my_put_char('0');
  my_put_char('x');
  my_put_ptr(n, "0123456789abcdef");
  return (count);
}

void	my_put_ptr(long n, char *hex)
{
  if (n >= 16)
    my_put_ptr(n / 16, "0123456789abcdef");
  my_put_char(hex[n % 16]);
}
