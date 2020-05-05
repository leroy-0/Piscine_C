/*
** my_strncpy.c for my_strncpy in /home/leroy_0/rendu/j_06
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Mon Oct  5 10:18:07 2015 maxime leroy
** Last update Tue Oct  6 20:18:34 2015 maxime leroy
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int x;

  x = 0;
  while (dest[x])
    {
      if (x < n)
        {
          dest[x] = src[x];
        }
      x++;
    }
  if (src > dest)
    dest[x + 1] = '\0';
  return (dest);
}
