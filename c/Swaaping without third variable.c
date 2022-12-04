#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    printf("Before Swap: %d %d\n", a,b );
    a = a+b;
    // printf( "a = %d, b= %d",a,b );
    b = a-b;
    // printf( "a = %d, b= %d",a,b );
    a = a-b;
    //printf( "a = %d, b= %d",a,b );
    printf("After swapping: %d %d\n", a,b);
    return 0;
}
