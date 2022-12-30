#include<stdio.h>
int main()
{
    int sh,sm,eh,em,dif;
    scanf("%d %d %d %d", &sh,&sm,&eh,&em);
    dif= ((eh*60)+em)- ((sh*60)+sm);
    if (dif<=0)

        dif= dif+(24*60);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dif/60, dif%60 );
    return 0;
}
