#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    while(n--)
    {
        cin>>j;
        int sum=0;
        for(i=1; i<j; i++)
        {
            if (j%i==0)
                sum= sum+ i;

        }
        if (j==sum)
            cout<< j << " eh perfeito"<<endl;
        else
            cout<< j << " nao eh perfeito"<<endl;
    }
    return 0;
}
