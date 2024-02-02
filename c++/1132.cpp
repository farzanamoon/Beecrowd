#include <iostream>

using namespace std;

int main() {

    int x,y,sum=0,i;
    cin>>x>>y;
    if (x>y)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
    for(i=x;i<=y;i++)
    {
        if (i%13!=0)
            sum=sum+i;
    }
 cout<<sum<<endl;

    return 0;
}
