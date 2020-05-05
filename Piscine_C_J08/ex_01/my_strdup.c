/*
** my_strdup.c for my_strdup in /home/leroy_0/rendu/Piscine_C_J08/ex_01
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Oct  7 09:56:55 2015 maxime leroy
** Last update Wed Oct  7 19:52:48 2015 maxime leroy
*/

#include <stdlib.h>

int	*my_strdup(char *src)
{
  int lenght;
  char *str;

  lenght = my_strlen(src);
  str = malloc(lenght);
  str = my_strcpy(str, src);
  return (str);
  free(str);
}
