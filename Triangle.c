#include<stdio.h>
/* Declare Maths function header */
#include<math.h>
/*
Area = Area Of Triangle
Peri = Perimeter of same Triangle
S_peri = Semi perimeter of same Triangle
A,B,C = Three sides of a Triangle
i,j,k = assigned Varable to sum of sides in a Triangle
x = assigned value for negative value check
Return: always 0
*/   
float A,B,C,i,j,k,x,Area,S_peri,Peri;
int main(int argc, char *argv[])
{
  printf("             TRIANGLE SOLUTIONS\n");
  printf("Enter first side: ");
  scanf("%f", &A);
  printf("Enter Second side: ");
  scanf("%f", &B);
  printf("Enter Third side: ");
  scanf("%f", &C);
  /* assigning variables to sum of two sides of the triangle */
  i = A + B;
  j = A + C;
  k = B + C;
  /* Checking for possible triangle */
  if (i > C || j > B || k > A)
    {
      printf("        Triangle is Valid!!!!\n");
      /* Calculating for the Perimeter of the Triangle */
      Peri = A + B + C;
      /* Calculating for the Semi Perimeter of the Triangle */
      S_peri = Peri/2;
      /* Calculating for the Area of the Triangle */
      x = S_peri * (S_peri - A ) * (S_peri - B) * (S_peri - C);
      if (x >= 0)
	{
	  Area = sqrt(x);
	  /* Displaying the Results */
	  printf("For a Triangle having sides %f, %f, and %f\nThe Perimeter is %f\nThe Semi perimeter is %f\nThe Area is %f", A,B,C,Peri,S_peri,Area);
	}
      else if (x < 0)
	{
	  Area = sqrt(x * (-1));
	  /* Displaying the Results */
	  printf("For a Triangle having sides %f, %f, and %f\nThe Perimeter is %f\nThe Semi perimeter is %f\nThe Area is %fi", A,B,C,Peri,S_peri,Area);
	}
    }
  /* If the above is not satisfied */
  else
    {
      printf("Invalid Triangle/Triangle Values");
    }
  printf("\n");
  return 0;
}
