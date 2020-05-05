/*
** my_isneg.c for my_isneg in /home/leroy_0/rendu/Piscine_C_J03
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Sep 30 13:27:16 2015 maxime leroy
** Last update Wed Sep 30 13:31:45 2015 maxime leroy
*/

int     my_isneg(int n);
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
}

