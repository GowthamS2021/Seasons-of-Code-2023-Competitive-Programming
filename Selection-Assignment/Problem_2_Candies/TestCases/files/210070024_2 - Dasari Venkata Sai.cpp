#include <iostream>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
    ifstream file("input.txt");
    string str;
    file >> str;
    int numOfInputs = stoi(str);
    for(int i = 0;i < numOfInputs; i++)
    {
        file >> str;
        int numOfCandies = stoi(str);
        if(numOfCandies % 2 == 0)
        {   
            int x = -1;
            printf("%d\n",x);
            continue;
        }
        string spells;
        spells = "";
        int dup;
        int numberOfSpells = 0;
        while(numOfCandies != 1)
        {
            dup = numOfCandies;
            int a = (numOfCandies + 1)/2;
            int b = (numOfCandies - 1)/2;
            if( a % 2 == 0) numOfCandies = b;
            else numOfCandies = a;
            if( 2*numOfCandies + 1 == dup) 
            {
                spells = spells + " 2";
                numberOfSpells++;
                continue;
            }
            else if( 2*numOfCandies - 1 == dup)
            { 
                spells = spells + " 1";
                numberOfSpells++;
                continue;
            }
        }
        reverse(spells.begin(), spells.end());
        printf("%d\n",numberOfSpells);
        printf("%s\n",spells.c_str());
    }
}