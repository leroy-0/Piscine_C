/*
** my_isneg.c for my_isneg in /home/leroy_0/rendu/Piscine_C_J03
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Sep 30 13:27:16 2015 maxime leroy
** Last update Wed Oct  7 17:30:13 2015 maxime leroy
*/

int     my_isneg(int nb)
{
  if (nb < 0)
    my_putchar('N');
  else
    my_putchar('P');
}

