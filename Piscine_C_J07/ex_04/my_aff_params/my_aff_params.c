/*
** my_aff_params.c for my_aff_params in /home/leroy_0/rendu/Piscine_C_J07/ex_04
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Wed Oct  7 15:30:55 2015 maxime leroy
** Last update Wed Oct  7 17:19:56 2015 maxime leroy
*/

int	my_aff_params(int argc, char **argv)
{
  int a;
  int b;

  a = 0;
  b = 0;
  while (a != argc)
    {
      my_putstr(argv[a]);
      my_putchar('\n');
      a++;
    }
}

int	main(int argc, char **argv)
{
  my_aff_params(argc, argv);
}
