#include <stdio.h>
int main()
{ int marks[10]={90, 92, 84, 72, 70, 68, 41, 55, 76, 80};
    int n=sizeof(marks)/sizeof(marks[0]);
    int a_plus=0, a=0, a_minus=0,b_plus=0, b=0, b_minus=0,c=0,d=0;
    for (int i=0;i<n;++i){
        if (marks[i]>=80 &&marks[i]<=100){
            a_plus++;
        }
        if (marks[i]>=75 &&marks[i]<=79){
            a++;
        }
        if (marks[i]>=70 &&marks[i]<=74){
            a_minus++;
        }
        if (marks[i]>=65 &&marks[i]<=69){
            b_plus++;
        }
        if (marks[i]>=60 &&marks[i]<=64){
            b++;
        }
        if (marks[i]>=55 &&marks[i]<=59){
            b_minus++;
        }
        if (marks[i]>=50 &&marks[i]<=54){
            c++;
        }
        if (marks[i]>=40 &&marks[i]<=49){
            d++;
        }}
    printf("A+: %d\n",a_plus);
    printf("A: %d\n",a);
    printf("A-: %d\n",a_minus);
    printf("B+: %d\n",b_plus);
    printf("B: %d\n",b);
    printf("B-: %d\n",b_minus);
    printf("C: %d\n",c);
    printf("D: %d\n",d);
    return 0;}
