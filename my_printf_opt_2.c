/*
** my_printf_opt_2.c for  in /Users/kaimou_m/Desktop/mo_printf
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Fri Apr  8 14:22:21 2016 KAIMOUNI Mossab
** Last update Fri Apr  8 14:28:10 2016 KAIMOUNI Mossab
*/
#include "my_printf.h"

void	my_printf_o(va_list	list)
{
  int	nb;

  nb = va_arg(list, int);
  my_put_base_nbr(nb, 'o');
}

void	my_printf_u(va_list	list)
{
  int	nb;

  nb = va_arg(list, int);
  my_put_unsigned_nbr(nb);
}

void	my_printf_x(va_list	list)
{
  int  	nb;

  nb = va_arg(list, int);
  my_put_base_nbr(nb, 'x');
}

void	my_printf_upper_x(va_list	list)
{
  int	nb;

  nb = va_arg(list, int);
  my_put_base_nbr(nb, 'X');
}
