#include<stdio.h>
/* Code to check for Number type
i,k,m,l: Declared empty variables
j,o,p,e,x,s,ep,op: variables with initialized numbers for counting
Return: Always 0.
 */
int i,j = 1,o = 0,p = 0,e = 0,x = 1,s = 0,k,l,m,ep = 0,op = 0;
int main(int argc, char *argv[])
{
  printf("Enter number range to search: ");
  scanf("%d", &i);
  while  (x <= i)
    {
      printf("Enter a number: ");
      scanf("%d", &j);
      //Checking for even and prime number 2
      if (j == 2)
	{
	  printf("\n%d is an even number and also a prime number\n", j);
	  ep++;
	}
      //Checking for odd and prime numbers 3,5, and 7
      else if (j == 3 || j == 5 || j == 7)
	{
	  printf("\n%d is an odd number and also a prime number\n", j);
	  op++;
	}
      //Checking for odd number 1
      else if (j == 1)
	{
	  printf("\n%d is an odd number\n", j);
	  s++;
	}
      //Checking for other odd and prime numbers
      else if (j % 2 != 0 && j % 3 != 0 && j % 5 != 0 && j % 7 != 0)
	{
	  printf("\n%d is an odd number and also a prime number\n", j);
	  p++;
	}
      //Checking for other odd numbers
      else if (j % 2 != 0 || j == 1)
	{
	  printf("\n%d is an odd number\n", j);
	  o++;
	}
      //checking for other even numbers
      else if (j % 2 == 0)
	{
	  printf("\n%d is an even number\n", j);
	  e++;
	}
      x++;
    }
  k = e++ + ep++;
  l = s++ + op++ + o++ + p++;
  m = ep++ + op++ + p++ - 3;
  //Displaying with the right words
  if (k == 1)
    {
      printf("There are %d even number\n", k);
      printf("There are %d odd numbers\n", l);
      printf("There are %d prime numbers\n", m);
    }
  else if (l == 1)
    {
      printf("There are %d even numbers\n", k);
      printf("There are %d odd number\n", l);
      printf("There are %d prime numbers\n", m);
    }
  else if (m == 1) 
    {
      printf("There are %d even numbers\n", k);
      printf("There are %d odd numbers\n", l);
      printf("There are %d prime number\n", m);
    }
  else
    {
      printf("There are %d even numbers\n", k);
      printf("There are %d odd numbers\n", l);
      printf("There are %d prime numbers\n", m);
    }
  return 0;
}
