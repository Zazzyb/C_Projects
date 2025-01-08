#include <stdio.h>
#define PI 3.142857142857142
float r,area;
int main(int argc, char *argv[])
{
  printf("          AREA OF A CIRCLE\n");
  printf("Please Enter Radius:");
  scanf("%f", &r);
  printf("\n");
  area = PI*r*r;
  printf("The area of circle with Radius %f is %f", r,area);
  printf("\n");
  return 0;
}
