/*
** my_strcat.c for my_strcat in /home/leroy_0/rendu/Piscine_C_J07/ex_02
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Oct  7 11:56:31 2015 maxime leroy
** Last update Wed Oct  7 14:41:54 2015 maxime leroy
*/

char	*my_strcat(char *dest, char *src)
{
  char a;
  char b;

  a = 0;
  b = 0;
  while (dest[a] != '\0')
    a++;
  while (src[b] != '\0')
    {
      dest[a] = src[b];
      a++;
      b++;
    }
  if (src[b] == '\0')
    dest[a] = src[b];
  return (dest);
}
