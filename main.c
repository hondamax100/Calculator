#include <stdio.h>

int main(void)
{
  int opr;
  printf("\nWhat function would you like? [1a/2s/3m/4d]\n");
  scanf("%d", &opr);
  int num1;
  int num2;
  int res;
  int res2;
  int typ1;
  printf("\nWrite your numbers:\n");
  scanf("%d%d", &num1, &num2);
  printf("\n");
  if(opr==1)
  {
    res=num1+num2;
    printf("The sum is [%d]\n\n", res);
  }
  else if(opr==2)
  {
    res=num1-num2;
    printf("The difference is [%d]\n\n", res);
  }
  else if(opr==3)
  {
    res=num1*num2;
    printf("The product is [%d]\n\n", res);
  }
  else if(opr==4)
  {
    res=num1/num2;
    res2=num1%num2;
    printf("The quotient is [%d], remainder [%d]\n\n", res, res2);
  }
  else
  {
    printf("In future, use one of the four aforementioned operators...\n");
  }
  return 0;
}
