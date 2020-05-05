/*
** my_factorielle_rec.c for my_factorielle_rec in /home/leroy_0/rendu/Piscine_C_J05
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Fri Oct  2 19:08:26 2015 maxime leroy
** Last update Tue Oct  6 14:20:18 2015 maxime leroy
*/

int     my_factorielle_rec(int nb)
{
  int store;

  if (nb < 13 && nb > 0)
    {
      if (nb > 1)
        {
          store = my_factorielle_rec(nb - 1) * nb;
          return (store);
        }
      else
	{
	  return (nb);
	}
    }
  else if (nb == 0)
	{
	  return (1);
	}
  else
    {
      return (0);
    }
}
