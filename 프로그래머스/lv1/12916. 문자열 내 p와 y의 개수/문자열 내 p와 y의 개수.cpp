#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int sum = 0;
    string j;
    for (int i = 0; i < s.length(); i++)
    {
        string j;
        j = s[i];
        string W = j;
        if (W=="p" || W=="P"){
            sum += 1;
        }
        else if(W=="y" || W=="Y"){
            sum += -1;
        }
    }
    if (sum != 0){
        return false;
    }

    return true;
}