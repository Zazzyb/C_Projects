#include <stdio.h>
#define PI 3.142857142857142
float r,d,p,area;
int opt;
int main(int argc, char *argv[])
{
  printf("          AREA OF A CIRCLE\n");
  printf("       Please use the correspondng number to the option to\n       select what you'll be working with:\n1.) Diameter\n2.) Radius\n>>  ");
  scanf("%d", &opt);
  if (opt == 2)
    {
      printf("Please Enter Radius:");
      scanf("%f", &r);
      printf("\n");
      area = PI*r*r;
      p = 2 * PI * r;
      printf("For a Circle with Radius %f,\nThe Perimeter or Circumference is %f\nThe Area is %lf", r,p,area);
      printf("\n");
      }
  else if (opt == 1)
    {
      printf("Please Enter Diameter:");
      scanf("%f", &d);
      printf("\n");
      r = d/2;
      area = PI*r*r;
      p = 2 * PI * r;
      printf("For a Circle with Diameter %f,\nThe Perimeter or Circumference is %f\nThe Area is %f", d,p,area);
      printf("\n");
    }
  else
    {
      printf("Invalid Input");
    }
  return 0;
}
