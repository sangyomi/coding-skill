#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(string s) {
    bool answer = true;
    int len = s.size();
    if (len != 4 && len != 6){
        return false;
    }
    for (int i = 0 ; i < len ; i++){
        if (int(s[i])>64) return false;
    }
    return answer;
}