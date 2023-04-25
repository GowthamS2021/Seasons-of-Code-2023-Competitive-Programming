#include <iostream>
#include <string.h>
using namespace std;
void match(int n)
{
    char s[n][5];//to accept all the strings
    cin.ignore(); //to ignore the new line character given(after entering the value of n) in the buffer
    for(int i=0;i<n;i++)
    {
        s[i][0]='\0';
        cin.getline(s[i],5);
    }
    for(int i=0;i<n;i++)
    {
        int x=1; //to find the number of positive integers matching the template
        if(s[i][0]=='0')
        {
            cout<<"0"<<endl;
            continue;
        }
        for(int j=0;j<sizeof(s[i]);j++)
        {
            if(j==0 && s[i][j]=='?')
                x*=9;
            else if(s[i][j]=='?')
                x*=10;
        }
        cout<<x<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    match(n);
    return 0;
}

