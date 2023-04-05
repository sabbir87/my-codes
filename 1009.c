#include<stdio.h>
int main()
{
  char employee;

  float salary,sold_porduct;

  scanf("%s%f%f",&employee,&salary,&sold_porduct);

  printf("TOTAL = R$ %.2f\n",salary+(sold_porduct*.15));

  return 0;
}
