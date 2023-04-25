//Roll number 22b0069 Problem number 2 Candies

#include <iostream>
using namespace std;

int main()
{   //decleration and input
            int test=0,curn=0,spells=0;
            int val[10001];
            char path[41];
            cin>>test;
            for(int i=0;i<test;i++)
            {
                cin>>val[i];
            }

    
    //loop for each test case
    for(int i=0;i<test;i++)
    {
                    //initialize for each test case
                    curn=val[i];
                    spells=0;
                    
                    //decarde even numbers
                    if(curn%2==0)
                    {
                        cout<<"-1"<<endl; continue;
                    }

                    //compute back all the parent node till 3
                    while(curn>3)
                    {
                            if((curn+1)%4==0)
                            {
                                curn=((curn-1)/2);
                                spells++;
                                path[spells]='2';
                                continue;
                            }
                            if((curn-1)%4==0)
                            {
                                curn=((curn+1)/2);
                                spells++;
                                path[spells]='1';
                            }
                    }
                    // add parent node 1 with spell 2
                    spells++;
                    path[spells]='2';
                   
        //output of each test case
        cout<<spells<<endl;                  
        for(int i=spells;i>0;i--)
        {
            cout<<path[i]<<" ";
        }
        cout<<endl;
    }
    // end
    return 0;
}

