/*
** my_put_str.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 18:12:50 2015 alexis zeghers
** Last update Mon Nov 16 14:49:05 2015 alexis zeghers
*/

#include "include/head.h"

int	init_put_str(va_list *ap)
{
  char	*str;
  int	count;

  str = (va_arg(ap, char*));
  if (str == NULL)
    count = my_put_str("(null)");
  else
    count = my_put_str(str);
  return (count);
}

int	my_put_str(char *str)
{
  int	i;
  int	count;

  count = 0;
  i = 0;
  while (str[i])
    {
      count = count + my_put_char(str[i]);
      i = i + 1;
    }
  return (count);
}
