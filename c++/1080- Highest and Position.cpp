#include<iostream>
using namespace std;
int main()
{
    int num,i,highest=0,posi=0;
    for(i=0;i<=100;i++)
    {
        cin>>num;
        if (num>highest)
        {
            highest=num;
            posi=i;

        }
    }
    cout<<highest<<endl<<posi+1<<endl;
    return 0;
}
