/*
** my_strcat.c for my_strcat in /home/leroy_0/rendu/Piscine_C_J07/lib/my
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Oct  7 13:08:47 2015 maxime leroy
** Last update Sun Oct 25 00:52:18 2015 maxime leroy
*/

char    *my_strcat(char *dest, char *src)
{
  char a;
  char b;

  a = 0;
  b = 0;
  while (dest[a] != '\0')
    a++;
  while (src[b] != '\0')
    {
      dest[a + b] = src[b];
      b++;
    }
  return (dest);
}
