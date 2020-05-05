/*
** my_strncmp.c for my_strncmp in /home/leroy_0/rendu/Piscine_C_J06/ex_07
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Tue Oct  6 16:30:48 2015 maxime leroy
** Last update Tue Oct  6 17:43:34 2015 maxime leroy
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int a;

  a = 0;
  while (a < n)
    {
      if (s1[a] < s2[a])
        return (-1);
      if (s1[a] > s2[a])
        return (1);
      a++;
    }
  if (s1[a] < s2[a])
    return (-1);
  if (s1[a] > s2[a])
    return (1);
  if (s2[a] == s1[a])
    return (0);
}
