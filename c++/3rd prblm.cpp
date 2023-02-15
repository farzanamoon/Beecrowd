#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    char str[100];
    int i;
    int freq[256]={0};
    int sum=0;
    cout<<"Enter a string\n";
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        freq[str[i]]++;
    }
        for(i=0; i<256; i++)
            {
        if(freq[i] !=0){
            //cout<<freq[i]+1<<endl;
            sum = sum + freq[i]+1;
        }

    }

    cout << sum<<endl;

    return 0;
}
