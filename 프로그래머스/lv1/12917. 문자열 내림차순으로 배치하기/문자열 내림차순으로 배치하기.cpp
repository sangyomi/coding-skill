#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool st(int a,int b){
    return a > b;
    }

string solution(string s) {
    vector<int> w;
    string answer = "";
    for (int i = 0; i < s.size();i++){
        w.push_back(int(s[i]));
    }
    sort(w.begin(), w.end(), st);
    for (int i = 0; i < s.size();i++){
        answer += char(w[i]);
    }
    return answer;
}