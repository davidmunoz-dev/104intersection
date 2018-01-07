#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	cylindre(int xp, int yp, int zp, int xv, int yv, int zv, int r)
{
  float a = 0;
  float b = 0;
  float c = 0;
  float xm = 0;
  float ym = 0;
  float zm = 0;;
  float xm1 = 0;
  float ym1 = 0;
  float zm1 = 0;
  float xm2 = 0;
  float ym2 = 0;
  float zm2 = 0;
  float lambda = 0;
  float lambda1 = 0;
  float lambda2 = 0;
  float delta = 0;
  float rrad = 0;

  a = pow(xv, 2) + pow(yv, 2);
  b = 2 * (xv * xp + yv * yp);
  c = pow(xp, 2) + pow(yp, 2) - pow(r, 2);

  delta = pow(b, 2) - 4*a*c;

  if (a == 0 && b == 0 && c == 0)
    printf("Infinite number of points");
  else
    {
      if (delta < 0)
	printf("No intersection point\n");
      else if (delta == 0)
	{
	  printf("1 intersection point :\n");
	  lambda = -b / 2 * a;
	  xm = xp + lambda * xv;
	  ym = yp + lambda * yv;
	  zm = zp + lambda * zv;
	  printf("(%.3f, %.3f, %.3f)\n", xm, ym, zm);
	}
      else if (delta > 0)
	{
	  printf("2 intersection points :\n");
	  lambda = (-b - sqrt(delta)) / (2 * a);
	  lambda2 = (-b + sqrt(delta)) / (2 * a);
	  xm1 = xp + lambda * xv;
	  ym1 = yp + lambda * yv;
	  zm1 = zp + lambda * zv;

	  xm2 = xp + lambda2 * xv;
	  ym2 =yp + lambda2 * yv;
	  zm2 =zp + lambda2 * zv;
	  printf("(%.3f, %.3f, %.3f)\n", xm2, ym2, zm2);
	  printf("(%.3f, %.3f, %.3f)\n", xm1, ym1, zm1);
	}
    }
}
