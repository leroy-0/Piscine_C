/*
** infin_add.c for infin_add in /home/leroy_0/rendu/Piscine_C_infinadd
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Mon Oct 19 12:41:13 2015 maxime leroy
** Last update Sun Nov  1 00:31:36 2015 maxime leroy
*/

#include <stdio.h>
#include <stdlib.h>

char	*my_suppd(int argc, char **argv, int c, int d)
{
  char *str1;
  int x;
  int y;

  if (c < d)
    {
      str1 = malloc(d);
      x = d - c;
      y = 0;
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

char	*my_zero(int argc, char **argv, int c, int d)
{
  char *str2;
  int x;
  int y;

  if (c > d)
    {
      str2 = malloc(c);
      x = c - d;
      y = 0;
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
  return (str2);
}

char	*my_display(int a, char *ret, char *str2)
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
  while ((ret[a] == '0' || (ret[a] > '9' || ret[a] < '0')) && my_strlen(ret) > 1)
    {
      ret[a] = '\r';
      a++;
    }
  return (ret);
}
char	*infin_add(char *str1, char *str2, int c, int d)
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
      if (str1[c] - '0' + str2[d] - '0' + ret[a] >= 10)
	ret[a + 1] = 1;
      ret[a] = ((str1[c] - '0' + str2[d] - '0' + ret[a]) % 10);
      a++;
    }
  my_display(a, ret, str2);
}

char	*my_displayend(int argc, char **argv)
{
  char *str1; 
  char *str2;
  int a;
  int c;
  int d;

  c = my_strlen(argv[1]);
  d = my_strlen(argv[2]);
  if (c < d)
    {
      str1 = my_suppd(argc, argv, c, d);
      str2 = argv[2];
    }
  if (c > d)
    {
      str2 = my_zero(argc, argv, c, d);
      str1 = argv[1];
    }
  if (c == d)
    {
      str1 = argv[1];
      str2 = argv[2];
    }
  c = my_strlen(str1);
  d = my_strlen(str2);
  if (argv[1][0] == '-' && argv[2][0] == '-')
    my_putchar('-');
  while (str1[a] == '-' || str1[a] == '0')
    {
      str1[a] = '0';
      a++;
    }
  while (str2[a] == '-' || str2[a] == '0')
    {
      str2[a] = '0';
      a++;
    }
  return (infin_add(str1, str2, c, d));
}
