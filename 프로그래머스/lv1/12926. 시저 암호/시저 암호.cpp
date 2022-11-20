#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, int n) {
    for (int i = 0 ; i < s.size(); i++){
        int x = s[i]+n;
        if (s[i] == ' '){
            continue;
        }
        else if (s[i] >= 97 && s[i] <= 122){
            if (x >= 97 && x <= 122) s[i] = x;
            else s[i] = x-26;
        }
        else if (s[i] >= 65 && s[i] <= 90){
            if (x >= 65 && x <= 90) s[i] = x;
            else s[i] = x-26;
        }
    }
    return s;
}