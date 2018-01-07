/*
** 104intersection.c for 104intersection in /home/colett_j/rendu/Mathematic/104intersection
** 
** Made by Jean-Baptiste COLETTE
** Login   <colett_j@epitech.net>
** 
** Started on  Mon Dec 14 13:50:37 2015 Jean-Baptiste COLETTE
** Last update Mon Dec 14 15:38:41 2015 Munoz David
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

void	print_coordinate_cylinder(int ac, char **av)
{
  printf("cylinder of radius %s\n", av[8]);
  printf("straight line going through the (%s,%s,%s) point and of direction vector (%s,%s,%s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
}

void	print_coordinate_sphere(int ac, char **av)
{
  printf("sphere of radius %s\n", av[8]);
  printf("straight line going through the (%s,%s,%s) point and of direction vector (%s,%s,%s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
}

void	print_coordinate_cone(int ac, char **av)
{
  printf("cone of %s degree angle\n", av[8]);
  printf("straight line going through the (%s,%s,%s) point and of direction vector (%s,%s,%s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
}

int	main(int ac, char **av)
{
  if(ac != 9)
    {
      printf("option xp yp zp xv yv zv parameter\n");
      return (84);
    }
  else
    {
      if (av[1][0] == '1')
	{
	  print_coordinate_sphere(ac, av);
	  sphere(atoi(av[2]), atoi(av[3]), atoi(av[4]), atoi(av[5]), atoi(av[6]), atoi(av[7]), atoi(av[8]));
	  return (0);
	}
      else if (av[1][0] == '2')
	{
	  print_coordinate_cylinder(ac, av);
	  cylindre(atoi(av[2]), atoi(av[3]), atoi(av[4]), atoi(av[5]), atoi(av[6]), atoi(av[7]), atoi(av[8]));
	  return (0);
	}
      else if (av[1][0] == '3')
	{
	  print_coordinate_cone(ac, av);
	  cone(atoi(av[2]), atoi(av[3]), atoi(av[4]), atoi(av[5]), atoi(av[6]), atoi(av[7]), atoi(av[8]));
	  return (0);
	  }
      else
	return (84);
    }
  return (0);
}
