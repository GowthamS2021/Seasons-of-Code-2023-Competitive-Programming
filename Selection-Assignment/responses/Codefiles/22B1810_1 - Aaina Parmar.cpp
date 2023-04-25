#include <iostream>
#include <string>
using namespace std;
int main()
{
    int counter=0;
    string integerTemp;
    cout<<"Enter your integer template of maximum 5 characters: \n";
    cin>>integerTemp;
    for(int i=1;i<=99999;i++)
    {
        int size=0;
        int j=4;
        int digits[5];
        int n=i;
        while(n>0)
        {
         digits[j]=(n%10);
         n=n/10;
         j--;
         size++;
        }
        if(size==integerTemp.length())
        {
            int a=0;
            for(int i=0;i<integerTemp.length();i++)
            {
                if(integerTemp[i]=='?')
                {a++;}
                else if (int(integerTemp[i]-'0')==digits[5-size+i])
                {a++;}
                
            }
            if(a==integerTemp.length())
            {counter++;}
            
        }
    }
    cout<<"the total number of integers are "<<counter<<"\n";
    return 0;
}