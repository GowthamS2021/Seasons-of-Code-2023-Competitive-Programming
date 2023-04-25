#include <iostream>
using namespace std;
 #include<math.h>
int main()
{ 
	int cases;
	cin>>cases;
	cin.ignore();
	for (int i=0; i<cases; i++){
		char str[5];
		cin.getline(str,5);
		if (str[0]=='0'){
			cout<<0<<endl;
			continue;
		}
		else{
			int count=0;
			for(int j=0; j<5; j++){
				if (str[j]=='?') count+=1;
			}
			if (str[0]!='?'){
				cout<<pow(10,count)<<endl;
			}
			else{
				cout<<pow(10,count)-pow(10, count-1)<<endl;
			}

		}
	}
		
}