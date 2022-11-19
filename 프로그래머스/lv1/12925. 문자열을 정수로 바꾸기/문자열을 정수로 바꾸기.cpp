#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(string s) {
    long long answer = 0;
    for (int i = 0 ; i < s.size() ; i ++){
        if (s[i] == '-' || s[i] == '+'){
            continue;
        }
        answer += ((long long)(s[i])-48)*(pow(10,(s.size()-i)));        
        cout << answer << endl;
    }
    
    
    if (s[0] == '-'){
        return (answer*-1)/10;       
    }

    return answer/10;
}