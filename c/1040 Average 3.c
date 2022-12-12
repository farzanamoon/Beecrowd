#include<stdio.h>
int main()
{
    double N1, N2, N3,N4,N5,avg;
    scanf("%lf %lf %lf %lf %lf",&N1,&N2,&N3,&N4,&N5);
    avg=((N1*2+N2*3+N3*4+N4*1)/10);
    printf("Media: %.1lf\n", avg);
    if(avg>7.0)
    {
        printf("Aluno aprovado");
    }
    else if(avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame. \n");
        printf("Nota do exame: %.1lf\n", N5);
        avg= (avg+N5)/2;
        if (avg>=5.0)
        {
            printf("Aluno aprovado.\n");
        }

        else
        {
            printf("Aluno reprovado\n");
        }
         printf("Media final: %.1lf \n", avg);
    }
    else
    {
        printf("Aluno reprovado\n");
    }
return 0;
}

