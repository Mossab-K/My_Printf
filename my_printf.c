/*
** my_printf.c for  in /Users/kaimou_m/Desktop/mo_printf
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Fri Apr  8 14:22:57 2016 KAIMOUNI Mossab
** Last update Fri Apr  8 14:29:23 2016 KAIMOUNI Mossab
*/
#include "my_printf.h"

int	my_printf(char *str, ...)
{
  va_list	list;
  int		i;
  int 		letter;

  va_start(list, str);
  init_tab_and_pointer();
  for (i = 0; str[i] != 0; i++)
    {
      if ((str[i] == '%') && (char_in_array(my_tab_opt, str[i + 1]) == 1))
	{
	  letter = str[i + 1];
	  my_tab_printf[letter](list);
	  ++i;
	}
      else if (str[i] == '%' && str[i + 1] == '%')
	{
	  ++i;
	  my_putchar(str[i]);
	}
      else
	my_putchar(str[i]);
    }
  va_end(list);
  return 1;
}
