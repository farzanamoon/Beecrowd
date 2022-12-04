#include<stdio.h>
int main()
{
    int taka, leftover;
    scanf("%d", &taka);
    printf("%d\n", taka);
    printf("%d nota(s) de R$ 100,00 \n", taka/100);
    leftover= taka%100;
    printf("%d nota(s) de R$: 50,00\n", taka/50);
    leftover= taka%50;
    printf("%d nota(s) de R$: 20,00 \n", taka/20);
    leftover= taka%20;
    printf("%d nota(s) de R$: 10,00\n", taka/10);
    leftover= taka%10;
    printf("%d nota(s) de R$: \n", taka/5);
    leftover= taka%5;
    printf("%d nota(s) de R$: \n", taka/2);
    leftover= taka%2;
    printf("%d nota(s) de R$: \n", taka/1);
    return 0;

}

