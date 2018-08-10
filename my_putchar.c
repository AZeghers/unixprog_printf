/*
** my_putchar.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Mon Nov  9 16:43:39 2015 alexis zeghers
** Last update Sat Nov 14 22:16:18 2015 alexis zeghers
*/

#include "include/head.h"

int	init_put_char(va_list *ap)
{
  char	c;

  c = va_arg(ap, int);
  my_put_char(c);
  return (1);
}

int	my_put_char(char c)
{
  write(1, &c, 1);
  return (1);
}
