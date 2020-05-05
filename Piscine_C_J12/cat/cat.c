/*
** cat.c for cat in /home/leroy_0/rendu/J12
** 
** Made by maxime leroy
** Login   <leroy_0@epitech.net>
** 
** Started on  Tue Oct 13 20:14:48 2015 maxime leroy
** Last update Wed Oct 14 17:28:50 2015 maxime leroy
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int     my_putstr(char *str)
{
  char z;

  z = 0;
  while (str[z] != '\0')
    {
      my_putchar(str[z]);
      z = z + 1;
    }
}

int	cat(int argc, char **argv)
{
  int	fd;
  int	ret;
  char	buffer[1];
  int	i;

  i = 1;
  while (i < argc)
    {
      if ((fd = open(argv[i], O_RDONLY)) == -1)
	{
	  my_putstr("cat : Aucun fichier ou dossier de ce type\n");
	  return (1);
	}
      while (ret = read(fd, buffer, 1))
	write(1, &buffer, 1);
      i++;
    }
  return (0);
}

int	main(int argc, char **argv)
{
  char buffer[1];

  cat(argc, argv);
  while (argc == 1)
    {
      write(1, 0, 1);
      my_putstr(buffer);
      read(1, &buffer, 1);
    }
}
