/*
** head.h for  in /home/zegher_a/my_printf
** 
** Made by alexis zeghers
** Login   <zegher_a@epitech.net>
** 
** Started on  Sat Nov  7 03:20:36 2015 alexis zeghers
** Last update Mon Nov 16 16:35:11 2015 alexis zeghers
*/

#ifndef HEAD_H_
# define HEAD_H_

#include <unistd.h>
#include <stdarg.h>

/*Display Functions Inits*/

int		init_put_char(va_list *ap);
int		init_put_nbr(va_list *ap);
int		init_put_uns(va_list *ap);
int		init_put_uns_bin(va_list *ap);
int		init_put_str(va_list *ap);
int		init_put_oct(va_list *ap);
int		init_put_ptr(va_list *ap);
int		init_put_hex(va_list *ap);
int		init_put_majhex(va_list *ap);
int		init_put_minhex(va_list *ap);
int		init_put_unprint(va_list *ap);

/*Display Functions*/

int		my_put_unprint(char *str);
int		my_put_char(char c);
int		my_put_minhex(int n, char *hex);
int		my_put_nbr(int n);
void		my_put_uns(unsigned int n);
void		my_put_uns_bin(unsigned int n);
int		my_put_oct(int n);
void		my_put_hex(long n, char *hex);
int		my_put_majhex(int n, char *hex);
int		my_put_printoct(int n);
int		my_put_str(char *str);
void		my_put_ptr(long n, char *hex);

/*Compare & Space Counts & Printf*/

int		find_flag(char charact, char *flags);
int		do_flag(char *flags, va_list *ap, int i, const char *str);
int		display(const char *str, int i);
int		space(const char *str);
int		do_printf(const char *format, char *flags, va_list *ap, int i);
char		elude_space(const char *str);
int		my_charcmp(char a, char b);
int		my_printf(const char *format, ...);
int		my_printf2(const char *format, char *flags, va_list *ap, int i);

#endif /* !HEAD_H_ */
