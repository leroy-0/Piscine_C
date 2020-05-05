/*
** my_evil_str.c for my_evil_str in /home/leroy_0/rendu/j_04
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Thu Oct  1 16:41:35 2015 maxime leroy
** Last update Thu Oct  1 19:26:50 2015 maxime leroy
*/

char *my_evil_str(char *str)
{
  char z;
  int x;
  int y;

  x = 0 ;
  y = my_strlen(str) - 1;
  while (x < y)
    {
      z = str[x];
      str[x] = str[y];
      str[y] = z;
      x++;
      y--;
    }
  return (str);
}
