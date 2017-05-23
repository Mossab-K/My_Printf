/*
** my_lib_2.c for  in /Users/kaimou_m/Desktop/mo_printf
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Fri Apr  8 14:21:46 2016 KAIMOUNI Mossab
** Last update Fri Apr  8 14:26:37 2016 KAIMOUNI Mossab
*/
#include "my_printf.h"

void	init_tab_and_pointer()
{
  my_tab_printf['s'] = &my_printf_s;
  my_tab_printf['c'] = &my_printf_c;
  my_tab_printf['i'] = &my_printf_i;
  my_tab_printf['d'] = &my_printf_d;
  my_tab_printf['o'] = &my_printf_o;
  my_tab_printf['u'] = &my_printf_u;
  my_tab_printf['x'] = &my_printf_x;
  my_tab_printf['X'] = &my_printf_upper_x;

  my_tab_opt[0] = 's';
  my_tab_opt[1] = 'c';
  my_tab_opt[2] = 'i';
  my_tab_opt[3] = 'd';
  my_tab_opt[4] = 'o';
  my_tab_opt[5] = 'u';
  my_tab_opt[6] = 'x';
  my_tab_opt[7] = 'X';
  my_tab_opt[10] = '\0';
}

int	char_in_array(char *tab, char letter)
{
  int i;

  for (i = 0; tab[i]; ++i)
    {
      if (tab[i] == letter)
	return 1;
    }
  return 0;
}

void	my_put_base_nbr(int nb, char base_type)
{
  int base_len;
  int res;
  int modulo_nb;
  char *base_str;

  base_str = get_base_str(base_type);
  base_len = my_strlen(base_str);
  modulo_nb = nb % base_len;
  res = nb / base_len;
  if (res >= base_len)
    my_put_base_nbr(res, base_type);
  else
    my_putchar(base_str[res]);
  my_putchar(base_str[modulo_nb]);
}

char	*get_base_str(char base_type)
{
  if (base_type == 'o')
    return "01234567";
  else if (base_type == 'x')
    return "0123456789abcdef";
  else if (base_type == 'X')
    return "0123456789ABCDEF";
  else
    return "01234567";
}
