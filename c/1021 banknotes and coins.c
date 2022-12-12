#include<stdio.h>
int main()
{
double N;
int n,a,b,c;
scanf("%lf", &N);
n=N;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", n/100);
a= n%100;
printf("%d nota(s) de R$ 50.00\n", a/50);
a=a%50;
printf("%d nota(s) de R$ 20.00\n", a/20);
a=a%20;
printf("%d nota(s) de R$ 10.00\n", a/10);
a=a%10;
printf("%d nota(s) de R$ 5.00\n", a/5);
a=a%5;
printf("%d nota(s) de R$ 2.00\n", a/2);
a=a%2;
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", a/1);

b=(N*100)-(n*100);


printf("%d moeda(s) de R$ 0.50\n", b/50);
c=b%50;
printf("%d moeda(s) de R$ 0.25\n", c/25);
c=c%25;
printf("%d moeda(s) de R$ 0.10\n", c/10);
c=c%10;
printf("%d moeda(s) de R$ 0.05\n", c/05);
c=c%5;
printf("%d moeda(s) de R$ 0.01\n", c/01);
c=c%1;
return 0;
}
