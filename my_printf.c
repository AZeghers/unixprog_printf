/*
** my_printf.c for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Sun Nov  8 01:11:47 2015 alexis zeghers
** Last update Mon Nov 16 18:26:23 2015 alexis zeghers
*/

#include "include/head.h"

int			(*g_ptrs[])(va_list *ap) = {
  &init_put_nbr,
  &init_put_nbr,
  &init_put_oct,
  &init_put_minhex,
  &init_put_majhex,
  &init_put_uns,
  &init_put_char,
  &init_put_str,
  &init_put_ptr,
  &init_put_uns_bin,
  &init_put_unprint
};

int			do_flag(char *flags, va_list *ap, int i, const char *str)
{
  int			count;
  int			n;

  count = 0;
  n = find_flag(elude_space(&str[i + 1]), flags);
  if (n == -1)
    {
      count = count + my_put_char(str[i]);
      if (space(&str[i + 1]) > 0)
	count = count + my_put_char(' ');
      count = count + my_put_char(elude_space(&str[i + 1]));
    }
  else
    count = count + g_ptrs[n](ap);
  return (count);
}

int			do_printf(const char *format, char *flags,
				  va_list *ap, int i)
{
  int			count;

  count = 0;
  while (format[i])
    {
      if (format[i] != '%' || (format[i] == '%'
			       && elude_space(&format[i + 1]) == '%'))
	{
	  count = count + display(format, i);
	  if (format[i] != '%')
	    i = i + 1;
	  else if (format[i] == '%' && elude_space(&format[i + 1]) == '%')
	    i = i + space(&format[i + 1]) + 2;
	}
      else
	{
	  count = count + do_flag(flags, ap, i, format);
	  i = i + space(&format[i + 1]) + 2;
	}
    }
  return (count);
}

int			my_printf(const char *format, ...)
{
  char			*flags;
  va_list		ap;
  int			i;
  int			count;

  va_start(ap, format);
  if (format == NULL)
    return (0);
  flags = "dioxXucspbS";
  i = 0;
  count = do_printf(format, flags, &ap, i);
  va_end(ap);
  return (count);
}
