#include<iostream>
using namespace std;
int main()
{
    int N,n,i;
    cin>>N;
    for(i=1;i<=N; i++)
    {
        cin>>n;
        if(n==0)
        {
            cout<<"NULL"<<endl;
        }
        else if(n%2==0 && n>0)
        {
            cout<< "EVEN POSITIVE"<<endl;
        }
        else if(n%2==0 && n<0)
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }
        else if(n%2!=0 && n>0)
        {
            cout<< "ODD POSITIVE"<<endl;
        }
        else if(n%2!=0 && n<0)
        {
            cout<<"ODD NEGATIVE"<<endl;
        }
    }


    return 0;
}
