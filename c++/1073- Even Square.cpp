#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cin>>N;


        for(i=1; i<=N; i++)
        {
            if(i%2==0)
            {
           int ans= i*i;
           cout<<i<<"^2 = "<< ans<<endl;
            }
        }


    return 0;
}
