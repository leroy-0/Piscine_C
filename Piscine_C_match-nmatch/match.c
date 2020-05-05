/*
** match.c for match in /home/leroy_0/rendu/Piscine_C_match-nmatch
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Fri Oct  9 18:50:51 2015 maxime leroy
** Last update Sun Oct 11 23:07:59 2015 maxime leroy
*/

#include <stdio.h>

int     my_strlen(char *str)
{
  int z;

  z = 0;
  while (str[z] != '\0')
    {
      z = z + 1;
    }
  return (z);
}

int	my_verify(char *s1, char *s2, int a, int b)
{
  while (s1[a] != '\0')
    {
      if (s1[a] == s2[b])
        {
          a++;
          b++;
        }
      if (s1[a] != s2[b] && s2[b] == '*')
        b++;
      if (s2[b] == '\0' && s2[b - 1] == s1[my_strlen(s1) - 1])
	return (1);
      if (s1[a - 1] == s2[b - 1] && s1[a] != s2[b] && s2[b] != '*')
	a++;
      if (s1[a] != s2[b] && s2[b] != '*')
        {
          if (s1[a + 1] == '\0' && s2[b] != s1[a] && s2[b - 1] != '*')
            return (0);
          a++;
        }
    }
  if (s1[a] == '\0' && s2[b] == '\0')
    return (1);
  if (s1[a] != s2[b])
    return (0);
}

int	match(char *s1, char *s2)
{
  int	a;
  int	b;
  int	c;
  int	d;

  a = 0;
  b = 0;
  c = my_strlen(s1);
  d = my_strlen(s2);
  while (s1[a] == '\0' && s2[b] == '*')
      b++;
  if (s1[a] == '\0' && s2[b] == '\0')
      return (1);
  b = 0;
  if (s1[c - 1] == s2[d - 1] || s2[d - 1] == '*')
      my_verify(s1, s2, a, b);
  else if (s1[c - 1] != s2[d - 1] || s2[d - 1] != '*')
      return (0);
}
