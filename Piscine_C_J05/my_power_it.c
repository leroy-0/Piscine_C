/*
** my_power_it.c for my_power_it in /home/leroy_0/rendu/J_05
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Fri Oct  2 14:34:45 2015 maxime leroy
** Last update Fri Oct  2 20:11:47 2015 maxime leroy
*/

int	my_power_it(int nb, int power)
{
  int a;
  int b;

  a = 1;
  b = nb;
  if (power == 0)
    {
      return (1);
    }
  if (power < 0)
    {
      return (0);
    }
  while (a != power && power > 1)
    {
      nb = nb * b;
      a++;
    }
  return (nb);
}
