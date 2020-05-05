/*
** my_square_root.c for my_square_root in /home/leroy_0/rendu/Piscine_C_J05
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Tue Oct  6 13:09:39 2015 maxime leroy
** Last update Tue Oct  6 13:34:27 2015 maxime leroy
*/

int	my_square_root(int nb)
{
  int a;
  int b;

  a = 1;
  if (nb == 0 || nb < 0)
      return (0);
  while ((a*a) != nb && a < 46341)
      a++;
  if (a > 46340)
    return ('\0');
  if (a*a == nb)
    {
      return (a);
    }
}
