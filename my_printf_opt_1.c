/*
** my_printf_opt_1.c for  in /Users/kaimou_m/Desktop/mo_printf
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Fri Apr  8 14:24:11 2016 KAIMOUNI Mossab
** Last update Fri Apr  8 14:31:01 2016 KAIMOUNI Mossab
*/
#include "my_printf.h"

void	my_printf_s(va_list		list)
{
  char		*str;

  str = va_arg(list, char *);
  my_putstr(str);
}

void	my_printf_c(va_list		list)
{
  char		c;

  c = (char) va_arg(list, int);
  my_putchar(c);
}

void	my_printf_i(va_list		list)
{
  int		nb;

  nb = va_arg(list, int);
  my_put_nbr(nb);
}

void	my_printf_d(va_list		list)
{
  int		nb;

  nb = va_arg(list, int);
  my_put_nbr(nb);
}
