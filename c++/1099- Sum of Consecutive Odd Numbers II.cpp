#include<iostream>
using namespace std;
int main()
{
    int N,i,x,y,sum,j,tem;
    cin>>N;
    for(i=0; i<=N;i++)
    {
    cin>>x>>y;
    if (x==y)
    {
        sum=0;
    }
    else if (x>y)
    {
        tem=x;
        x=y;
        y=tem;
    }
    for(j=x+1; j<y;j++)
    {
        if(j%2!=0)
            sum+=j;
    }
    cout<<sum<<endl;
    }

    return 0;
}
