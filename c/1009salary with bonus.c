#include<stdio.h>
int main()
{
  double salary, sales, TOTAL;
  char name[20];
    scanf("%[^\n]", name);
    scanf("%lf%lf",&salary,&sales);

    TOTAL= (sales*.15)+salary;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
