/*
** my_strupcase.c for my_strupcase in /home/leroy_0/rendu/Piscine_C_J06/ex_08
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Tue Oct  6 16:43:11 2015 maxime leroy
** Last update Tue Oct  6 17:53:02 2015 maxime leroy
*/

char	*my_strupcase(char *str)
{
  int a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] <= 'z' && str[a] >= 'a')
	  str[a] = str[a] - 32;
      if (str[a] > 'z' || str[a] < 'a')
	  str[a] = str[a];
      a++;
    }
  return (str);
}
