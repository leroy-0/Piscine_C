/*
** my_strncat.c for my_strncat in /home/leroy_0/rendu/Piscine_C_J07/ex_03
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Oct  7 15:03:23 2015 maxime leroy
** Last update Wed Oct  7 15:25:21 2015 maxime leroy
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  char a;
  char b;

  a = 0;
  b = 0;
  while (dest[a] != '\0')
    a++;
  while (b < nb)
    {
      dest[a] = src[b];
      a++;
      b++;
    }
  if (src[b])
    dest[a] = '\0';
  return (dest);
}
