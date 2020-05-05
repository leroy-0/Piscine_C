/*
** my_factorielle_it.c for my_factorielle_it in /home/leroy_0/rendu/J_05
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Fri Oct  2 10:04:25 2015 maxime leroy
** Last update Fri Oct  2 18:32:04 2015 maxime leroy
*/

int	my_factorielle_it(int nb)
{
  int a;
  int b;

  if (nb < 0 || nb > 12)
    {
    return (0);
    }
  a = 1;
  b = 1;
  while (nb != 1 && nb > 0)
    {
      a = a * b;
      if (nb < 0 || nb > 12)
	{
	  return (0);
	}
      nb = nb - 1;
      b = b + 1;
    }
  return (a);
}
