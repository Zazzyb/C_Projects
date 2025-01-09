 #include<stdio.h>
int x1,x,i,j,k;
char y[10],z[10];
int main(int argc, char *argv[])
{
  printf("               ACCESS CHECK\n");
  printf("ENTER YOUR FIRST NAME: ");
  scanf("%s", y);
  printf("ENTER YOUR LAST NAME: ");
  scanf("%s", z);
  printf("PLEASE ENTER YEAR OF BIRTH(yyyy): ");
  scanf("%d", &i);
  printf("PLEASE ENTER MONTH OF BIRTH(mm): ");
  scanf("%d", &j);
  printf("PLEASE ENTER DAY OF BIRTH(dd): ");
  scanf("%d", &k);
  x = 2025 - i;
  if (j < 13 && j > 0 && k > 0 && k < 32)
    {
      if (x <= 17)
	{
	  printf("                ACCESS DENIED!!!\nDear %s %s, you are underaged\n Go home to your Daddy, KID!!!", y,z);
	  }
      else if (x > 17 && x < 50)
	{
	  printf("                ACCESS GRANTED!!!\nHello %s %s, Welcome to the Party!!!", y,z);
	  }
      else
	{
      printf("                ACCESS DENIED!!!\nDear Mr/Mrs %s %s, Please go back home to your Family\n This party is not for you!!!", y,z);
      }
      printf("\n");
      }
  else
    {
      printf("Invalid inputs\n");
    }
  return 0;
}
