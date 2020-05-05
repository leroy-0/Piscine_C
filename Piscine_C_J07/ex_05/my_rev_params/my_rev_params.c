/*
** my_rev_params.c for my_rev_params in /home/leroy_0/rendu/Piscine_C_J07/ex_05
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Oct  7 16:26:07 2015 maxime leroy
** Last update Wed Oct  7 17:19:05 2015 maxime leroy
*/

int     my_rev_params(int argc, char **argv)
{
  int a;
  int x;
  int y;
  char z;

  a = 0;
  y = argc - 1;
  while (a != argc)
    {
      my_putstr(argv[y]);
      my_putchar('\n');
      y--;
      a++;
    }
}

int	main(int argc, char **argv)
{
  my_rev_params(argc, argv);
}
