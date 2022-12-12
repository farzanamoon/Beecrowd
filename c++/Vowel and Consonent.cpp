#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any Letter: ";
    cin>>ch;
    if (ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {

    if (ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='O'||ch=='E'||ch=='U')
        cout<<"The Letter is Vowel";
    else
        cout<<"The Letter is consonent";
    }
    else
        cout<<"Not Applicable";
    return 0;

}
