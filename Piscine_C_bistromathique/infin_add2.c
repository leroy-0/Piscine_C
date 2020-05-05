/*
** infin_add2.c for infin_add2 in /home/leroy_0/rendu/Piscine_C_infinadd
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Tue Oct 20 17:02:40 2015 maxime leroy
** Last update Sun Nov  1 00:35:26 2015 maxime leroy
*/

#include <stdio.h>
#include <stdlib.h>

char    *my_suppdneg(int argc, char **argv, int c, int d)
{
  char *str1;
  int x;
  int y;

  if (c < d)
    {
      str1 = malloc(d);
      x = d - c;
      y = 0;
      if (argv[1][0] == '-' && argv[2][0] != '-')
	str1[0] = '0';
      while (y < x)
        {
          str1[y] = '0';
          y++;
        }
      y = 0;
      while (x < d)
        {
          str1[x] = argv[1][y];
          x++;
          y++;
        }
    }
  return (str1);
}

char    *my_zeroneg(int argc, char **argv, int c, int d)
{
  char *str2;
  int x;
  int y;

  if (c > d)
    {
      str2 = malloc(c);
      x = c - d;
      y = 0;
      if (argv[2][0] == '-' && argv[1][0] != '-')
	str2[0] = '0';
      while (y < x)
        {
          str2[y] = '0';
          y++;
        }
      y = 0;
      while (x < c)
        {
          str2[x] = argv[2][y];
          x++;
          y++;
        }
    }
  my_putstr(str2);
  return (str2);
}

char    *my_displayneg(int a, char *ret, char *str2)
{
  a = 0;
  while (a != my_strlen(str2) + 1)
    {
      ret[a] += 48;
      a++;
    }
  if (ret[my_strlen(str2)] == '0')
    ret[my_strlen(str2)] = '\0';
  a = 0;
  while (ret[a] < '0' && ret[a] > '9')
    {
      ret[a] = '\r';
      a++;
    }
  a = 0;
  my_revstr(ret);
  if (ret[a] < '0' || ret[a] > '9')
    my_putchar('-');
  return (ret);
}

char	*my_negative(char *str1, char *str2, int c, int d)
{
  char *ret;
  int a;

  a = 0;
  ret = malloc(sizeof(d) + 1);
  while (a != my_strlen(str2) + 1)
    {
      ret[a] = 0;
      a++;
    }
  a = 0;
  while (c != 0 && d != 0)
    {
      d--;
      c--;
      if (str1[c] - '0' - str2[d] - '0' - ret[a] < 0)
	{
	  ret[a] = (((str1[c] - '0' - str2[d] - '0' - ret[a]) % 10) + 10);
	  ret[a + 1] = 1;
	}
      if (str1[c] - '0' - str2[d] - '0' - ret[a] >= 0)
	ret[a] = ((str1[c] - '0' - str2[d] - '0' - ret[a]) % 10);
      a++;
    }
  my_displayneg(a, ret, str2);
}

int     main(int argc, char **argv)
{
  char *str1;
  char *str2;
  int c;
  int d;

  if (argv[1][0] != '-' && argv[2][0] != '-')
    {
      printf("%s\n", my_displayend(argc, argv));
      return (0);
    }
  if (argv[1][0] == '-' && argv[2][0] == '-')
    {
      printf("%s\n", my_displayend(argc, argv));
      return (0);
    }
  if (argv[1][0] == '-' || argv[2][0] == '-')
    {
      return (0);
    }
  return (0);
}
