

#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    int n;
    cin >> n;              //testcases
    
    for(int i=0;i<n;i++){ 
        
        int digplace=1;//for calculation of answer
        string num;    //string
        cin>>num;
        int l= num.size(); 
               
         if(num[0] == '0') {   //check leading zero
                digplace=0; 
                cout<<"0"<<endl;
                continue;
            }

        for (int y=0;y<l;y++){

           if (num[y] == '?'){
             if (y == 0){
                digplace=digplace*9; //if leading character then (9) digits can be put
             }
             else{
                digplace=digplace*10;//if no leading character then (10) digits can be put
             }

        }
         else {
            continue;//if normal digit present then continue
         }
        }

      cout<<digplace<<endl; //print solution
    }
    
}