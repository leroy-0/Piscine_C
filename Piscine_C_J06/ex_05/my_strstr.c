/*
** my_strstr.c for my_strstr in /home/leroy_0/rendu/Piscine_C_J06/ex_05
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Mon Oct  5 12:24:06 2015 maxime leroy
** Last update Mon Oct  5 21:00:01 2015 maxime leroy
*/

int     my_strlen(char *str)
{
  int   y;

  y = 0;
  while (str[y])
    {
      y = y + 1;
    }
  return (y);
}

int	my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

char	*my_strstr(char *str, char *to_find)
{
  int a;
  int b;

  a = 0;
  b = 0;
  while (to_find[b] != '\0')
    {
      while (str[a] != to_find[0])
	a++;
      if (str[a] == to_find[b])
	{
	  while (str[a++] == to_find[b])
	    {
	      b++;
	    }
	}
      if (to_find[b] == '\0')
	{
	  a = a - (b + 1);
	  return (str + a);
	}
      if (str[a] == '\0')
	return ('\0');
      b = 0;
    }
}
