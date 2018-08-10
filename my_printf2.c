/*
** my_printf2.c for  in /home/zegher_a/rendu/PSU_2015_my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Sun Nov 15 01:38:13 2015 alexis zeghers
** Last update Mon Nov 16 14:01:30 2015 alexis zeghers
*/

#include "include/head.h"

int			find_flag(char charact, char *flags)
{
  int			i;

  i = 0;
  while (flags[i] && my_charcmp(charact, flags[i]) != 0)
    i = i + 1;
  if (i > 10)
    return (-1);
  else
    return (i);
}

char			elude_space(const char *str)
{
  int			i;

  i = 0;
  while (str[i] && str[i] == ' ')
    i = i + 1;
  return (str[i]);
}

int			space(const char *str)
{
  int			i;

  i = 0;
  while (str[i] && str[i] == ' ')
    i = i + 1;
  return (i);
}

int			display(const char *str, int i)
{
  if (str[i] != '%')
    my_put_char(str[i]);
  else if (str[i] == '%' && elude_space(&str[i + 1]) == '%')
    my_put_char('%');
  return (1);
}
